
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
First we did a comprehensive survey on the existing benchmarks and algorithms and did one (to our knowledge) the first survery on cryptographic algorithms in embedded system benchmarks, using the insights, weaknesses and strengths of the algorithms and benchmarks we found we created our own benchmark which has a big advantage over prior benchmarks and it is a main contribution. we calculated the std and we know that the probability that it will take longer than the mean plus 3 to std is less than 1% according to probability and statistics. This makes our benchmark stand out as we have a 99% probability as well!

![image](https://github.com/user-attachments/assets/cb0c0cbc-d05f-414b-9316-59ad62a312dd)

![image](https://github.com/user-attachments/assets/305d547f-65e4-4818-9cc8-8de1afed0bc1)

![image](https://github.com/user-attachments/assets/0e36e8a6-2305-42b4-9259-aeffc5b28d4f)

Here is how it looks like: 

![image](https://github.com/user-attachments/assets/037b6760-173d-45c8-b1d0-bc54c4ca1ec8)

Using this great information and amazing benchmark that covers the most important and practical algorithms, 

The STM32 use and implication is like below as well:

![image](https://github.com/user-attachments/assets/7eaac601-717e-4c98-81a9-089c3ea68d6c)

![image](https://github.com/user-attachments/assets/4fe4fffe-97e6-4d14-adab-42fe7d13daa2)
Specifying pin settings

![image](https://github.com/user-attachments/assets/10b8fe68-88e3-4ec0-a3ee-510356025144)
Clock and frequency settings

![image](https://github.com/user-attachments/assets/5d486b85-2e63-4444-9809-ff1427a4f26a)
Enable USART to exchange data from the board to the PC

![image](https://github.com/user-attachments/assets/12494923-6f19-44c9-b4e4-0deff1e18619)
Project Setting

![image](https://github.com/user-attachments/assets/11b8d927-3318-49c9-bce5-2f55733ff66b)
Auto-generated codes based on initial project settings

![image](https://github.com/user-attachments/assets/f5c75f11-9470-47dd-abff-95cd051b8d3c)
A successful build 

![image](https://github.com/user-attachments/assets/e7dfe622-ee02-463d-9ebc-43cb0e86b22a)
A successful load 


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

