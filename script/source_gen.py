#!/usr/bin/python3

import os
root = os.path.join(os.path.dirname(__file__), "..")
srcdir = os.path.join(root, "src")
files = []
for dirpath, _, filenames in os.walk(srcdir):
    # skip tests or generated directories if you want
    if "/tests/" in dirpath.replace("\\", "/"):
        continue
    for f in sorted(filenames):
        if f.endswith(".cpp") or f.endswith(".cc") or f.endswith(".cxx"):
            rel = os.path.relpath(os.path.join(dirpath, f), root).replace("\\", "/")
            files.append(rel)
print("# GENERATED - do not edit unless you know what you're doing")
print("set(MYPROJECT_SOURCES")
for f in files:
    print("  " + f)
print(")")
