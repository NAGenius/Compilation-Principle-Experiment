#!/bin/bash

make

# 检查make是否成功
if [ $? -ne 0 ]; then
    echo "Make failed. Exiting..."
    exit 1
fi

# 遍历test目录下的test_1到test_23文件
for i in {1..23}; do
    # 构造测试文件的路径
    testfile="test/test_$i"
    
    # 检查测试文件是否存在
    if [ -f "$testfile" ]; then
        echo "Running test: $i"
        # 执行命令
        ./parser "$testfile"
    else
        echo "Test file $testfile does not exist. Skipping..."
    fi
done

echo "All tests completed."