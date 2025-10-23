
# QtValueConverter
本项目是基于《Qt6 C++开发指南》中的示例练习而完成的 Qt 小项目，主要用于学习和交流，更多内容推荐购买原书  
原书作者：王维波  
出版信息：人民邮电出版社
> ⚠️ 本项目仅用于学习参考，非商业用途，侵权可联系删除

一个使用 **Qt Widgets** 编写的数值与字符串转换练习项目，展示了 **QString 与基本数据类型之间的转换方法**，以及 **不同进制的互相转换**。  
适合正在学习 Qt 或 C++ 的初学者，用于理解 `QString::number()`、`QString::setNum()`、`toInt()` 等常用方法的使用。

---

## 🚀 功能简介

| 功能按钮 | 功能描述 |
|-----------|-----------|
| 💰 **计算总价** | 从数量与单价计算出总金额，结果保留两位小数。 |
| 🔢 **十进制转二/十六进制** | 输入十进制数后，自动显示对应的二进制与十六进制表示。 |
| 💡 **二进制转十/十六进制** | 输入二进制字符串（如 `1010`），自动转换为十进制与十六进制。 |
| 🧮 **十六进制转十/二进制** | 输入十六进制字符串（如 `1F`），自动转换为十进制与二进制。 |
| 🧾 **调试输出 (Debug)** | 演示 `QString::setNum()` 的多种格式化方式（`f`、`E`、`g` 等）。 |

---

## 🛠️ 技术要点

- 使用 `QString` 的数值转换函数：
  - `QString::setNum()`  
  - `QString::number()`  
  - `QString::toInt()` / `QString::toFloat()`
- 演示不同浮点格式输出 (`f`、`E`、`g`)
- 信号槽命名规则（自动连接 `on_btnXxx_clicked()`）
- Qt Designer + C++ 联合使用

---

## 📂 项目结构

```

QtValueConverter/
│
├── widget.h / widget.cpp     # 主界面逻辑
├── widget.ui                 # Qt Designer 界面
├── main.cpp                  # 程序入口
└── README.md                 # 项目说明

````

---

## 🧰 环境要求

- **Qt 版本**：Qt 5.15+ 或 Qt 6.x  
- **编译器**：MSVC / MinGW / Clang 均可  
- **操作系统**：Windows / Linux / macOS  

---

## 💻 运行截图

> 
>  <img width="435" height="327" alt="c727789d-a454-44ca-b2dd-5c65ba21cca3" src="https://github.com/user-attachments/assets/9be7ac9c-8c32-4e7f-91f4-37267006f6bb" />



