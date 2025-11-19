#include "utils/UuidV7.h"
#include <array>
#include <chrono>
#include <iomanip>
#include <random>
#include <sstream>

using Utils::UuidV7Generator;

UuidV7Generator::UuidV7Generator() : gen(rd()) {}

std::string UuidV7Generator::generate() {
  // Get current timestamp in milliseconds
  auto now = std::chrono::system_clock::now();
  auto duration = now.time_since_epoch();
  uint64_t unix_ts_ms =
      std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();

  // Construct the 128-bit UUID
  std::array<uint8_t, 16> uuid_bytes;

  // Time (48 bits)
  uuid_bytes[0] = (unix_ts_ms >> 40) & 0xFF;
  uuid_bytes[1] = (unix_ts_ms >> 32) & 0xFF;
  uuid_bytes[2] = (unix_ts_ms >> 24) & 0xFF;
  uuid_bytes[3] = (unix_ts_ms >> 16) & 0xFF;
  uuid_bytes[4] = (unix_ts_ms >> 8) & 0xFF;
  uuid_bytes[5] = unix_ts_ms & 0xFF;

  // Generate 12 bits for rand_a
  // Using std::mt19937_64, we can get 64 bits at once.
  // We need 12 bits for rand_a and 62 bits for rand_b.
  // Let's generate a 64-bit random number and extract parts.
  uint64_t random_part_a_b = gen();

  uint16_t rand_a = (random_part_a_b >> 52) & 0xFFF; // High 12 bits for rand_a

  // Byte 6: (version << 4) | (rand_a_high_4_bits)
  uuid_bytes[6] =
      ((0x7 << 4) |
       ((rand_a >> 8) & 0x0F)); // Version 7 (0111) and high 4 bits of rand_a
  // Byte 7: rand_a_low_8_bits
  uuid_bytes[7] = rand_a & 0xFF; // Low 8 bits of rand_a

  // Generate 62 bits for rand_b
  uint64_t rand_b =
      random_part_a_b & 0x3FFFFFFFFFFFFFFFULL; // Low 62 bits for rand_b

  // Byte 8: (variant << 6) | (rand_b_high_6_bits)
  uuid_bytes[8] =
      ((0x2 << 6) |
       ((rand_b >> 56) & 0x3F)); // Variant (10) and high 6 bits of rand_b
  uuid_bytes[9] = (rand_b >> 48) & 0xFF;
  uuid_bytes[10] = (rand_b >> 40) & 0xFF;
  uuid_bytes[11] = (rand_b >> 32) & 0xFF;
  uuid_bytes[12] = (rand_b >> 24) & 0xFF;
  uuid_bytes[13] = (rand_b >> 16) & 0xFF;
  uuid_bytes[14] = (rand_b >> 8) & 0xFF;
  uuid_bytes[15] = rand_b & 0xFF;

  // Format into string
  std::stringstream ss;
  ss << std::hex << std::setfill('0');

  for (int i = 0; i < 16; ++i) {
    ss << std::setw(2) << static_cast<int>(uuid_bytes[i]);
    if (i == 3 || i == 5 || i == 7 ||
        i == 9) { // Standard UUID hyphen positions
      ss << "-";
    }
  }

  return ss.str();
}

const string generateUuid() {
  static UuidV7Generator generator;

  return generator.generate();
}
