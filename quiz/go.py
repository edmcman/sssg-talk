#!/usr/bin/env python

import json
import os

f = open("out.json", "r")
myjson = json.load(f)

os.mkdir("bins")

for k, v in myjson.items():
   print(k)
   if v is None: continue
   with open("bins/%s.c" % k, "w") as fo:
      fo.write(v['orig']['code'])
   os.system(f"clang -O3 'bins/{k}.c' -o 'bins/{k}'; strip 'bins/{k}'")
