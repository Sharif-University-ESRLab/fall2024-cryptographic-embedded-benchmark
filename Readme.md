
![Logo](https://via.placeholder.com/600x150?text=Your+Logo+Here+600x150)


# Evaluation of cryptographic algorithms and security protocols in embedded systems

The goal of this project is to design and implement a benchmark evaluation system for analyzing the performance of cryptographic algorithms and widely-used security protocols in embedded systems. This project will specifically focus on measuring system performance metrics such as Worst-Case Execution Time (WCET) and number of clock cycles to identify optimization opportunities. By developing new benchmarks that focus on modern cryptographic techniques, this project will address the problems found in older or expensive benchmark tools like Embench, Mibench, and EEMBC.


## Tools
- STMCubeMX
- STMCubeIDE
- KeiluVision
- PuTTy
- Tera Term
- STMCubeProgrammer
- STMCubeIDE
- KeiluVision
- PuTTy
- Tera Term
- STM32F103C8T6 - Blue Pill

## Implementation Details

In this section, you will explain how you completed your project. It is recommended to use pictures to demonstrate your system model and implementation.


Feel free to use sub-topics for your projects. If your project consists of multiple parts (e.g. server, client, and embedded device), create a separate topic for each one.

## How to Run

In this part, you should provide instructions on how to run your project. Also if your project requires any prerequisites, mention them. 

#### Examples:
#### Build Project
Your text comes here
```bash
  build --platform=OvmfPkg/OvmfPkgX64.dsc --arch=X64 --buildtarget=RELEASE --tagname=GCC5
```

#### Run server
Your text comes here
```bash
  pyhton server.py -p 8080
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `-p` | `int` | **Required**. Server port |



## Results
| Algorithm | Average Execution Time (seconds) | Worst Execution Time (seconds) |
|-----------|---------------------------------|-------------------------------|
| 🥇DES       | 0.000030                        | 0.001000                      |
| 🥈AES       | 0.000150                        | 0.001000                      |
| 🥉PRESENT   | 0.000170                        | 0.002000                      |
| RSA       | 0.000360                        | 0.002000                      |


![image](https://github.com/user-attachments/assets/a50faeb5-2a85-4e49-91a3-d28f8efb9a83)

Automatic GUI for our Benchmark!

![image](https://github.com/user-attachments/assets/194dfa4c-684e-4eba-801f-0a5ce864639d)


## Related Links
Some links related to your project come here.
 - [EDK II](https://github.com/tianocore/edk2)
 - [ESP32 Pinout](https://randomnerdtutorials.com/esp32-pinout-reference-gpios/)
 - [Django Doc](https://docs.djangoproject.com/en/5.0/)


## Authors
Authors and their github link come here.
- [@Author1](https://github.com/Sharif-University-ESRLab)
- [@Author2](https://github.com/Sharif-University-ESRLab)

