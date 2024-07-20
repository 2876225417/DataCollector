# test.py

import sys
import os

# 动态添加新的 .pyd 文件路径
new_pyd_path = os.path.join(os.path.dirname(__file__), '../DataCollector/build/Debug')
sys.path.append(new_pyd_path)

import ex

print(ex.add(1, 2))  # 这会输出 3
print(ex.subtract(5, 3))  # 这会输出 2
print(ex.multiply(2, 4))
print(ex.divide(9, 3))
