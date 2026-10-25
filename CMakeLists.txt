cmake_minimum_required(VERSION 4.3)
project(clioncode)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---------------------------------------------------------------------------
# One executable per lesson file.
#
# Why not GLOB? CMake rejects non-ASCII target names, so a target name cannot
# be derived from a Chinese file name. Target names below are ASCII; the
# source paths stay exactly as they are on disk.
#
# To add a new lesson: copy one line and change the target name + file path.
# ---------------------------------------------------------------------------

# --- root folder --------------------------------------------------------
add_executable(r01_else_if          "else if 语句.cpp")
add_executable(r02_if_else          "if else语句.cpp")
add_executable(r03_if_else_prac     "if else语句练习.cpp")
add_executable(r04_if_logic         "if逻辑判断语句.cpp")
add_executable(r05_if_logic_prac    "if逻辑判断语句练习.cpp")
add_executable(r06_main             "main.cpp")
add_executable(r07_switch           "switch控制语句.cpp")
add_executable(r08_while            "while循环语句.cpp")
add_executable(r09_enum             "枚举类型.cpp")
add_executable(r10_logic_case       "逻辑判断的综合案例.cpp")
add_executable(r11_logic_nested     "逻辑判断语句的嵌套.cpp")

# --- C++入门 ------------------------------------------------------------
add_executable(i01_cin_input        "C++入门/cin数据输入.cpp")
add_executable(i02_cin_prac         "C++入门/cin语句实践.cpp")
add_executable(i03_ternary          "C++入门/三元运算符.cpp")
add_executable(i04_ternary_prac     "C++入门/三元运算符练习.cpp")
add_executable(i05_bool             "C++入门/布尔数据类型.cpp")
add_executable(i06_string           "C++入门/数据类型-字符串.cpp")
add_executable(i07_compare          "C++入门/比较运算符.cpp")
add_executable(i08_resistor_cpp     "C++入门/电阻C++.cpp")
add_executable(i09_arithmetic       "C++入门/算数运算符.cpp")
add_executable(i10_assign           "C++入门/赋值运算符.cpp")
add_executable(i11_assign_prac      "C++入门/赋值运算符练习.cpp")
add_executable(i12_escape           "C++入门/转义字符.cpp")
add_executable(i13_logic_op         "C++入门/逻辑运算符.cpp")

# --- C++基础 ------------------------------------------------------------
add_executable(b01_const_type       "C++基础/C++常量类型的确定.cpp")
add_executable(b02_cout             "C++基础/cout打印输出.cpp")
add_executable(b03_main             "C++基础/main.cpp")
add_executable(b04_var_declare      "C++基础/变量的声明与赋值.cpp")
add_executable(b05_var_declare_prac "C++基础/变量的声明与赋值练习.cpp")
add_executable(b06_var_quick        "C++基础/变量的快速定义.cpp")
add_executable(b07_var_feature      "C++基础/变量的特征.cpp")
add_executable(b08_var_feature_prac "C++基础/变量的特征练习.cpp")
add_executable(b09_string_concat    "C++基础/字符串的拼接.cpp")
add_executable(b10_literal          "C++基础/字面常量示例.cpp")
add_executable(b11_float            "C++基础/数据类型-实型与小数格式输出.cpp")
add_executable(b12_int_sizeof       "C++基础/数据类型-整型与sizeof函数.cpp")
add_executable(b13_signed_unsigned  "C++基础/有符号与无符号数字.cpp")
add_executable(b14_identifier       "C++基础/标识符与关键字.cpp")
add_executable(b15_resistor_c       "C++基础/电阻C.cpp")
add_executable(b16_symbol_const     "C++基础/符号常量示例.cpp")

# --- practice ---------------------------------------------------------
add_executable(t01_debug           "debug_practice.cpp")
add_executable(t02_guess           "guess_number.cpp")
