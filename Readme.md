
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

First, we conducted a comprehensive survey of existing benchmarks and algorithms. To our knowledge, we were the first to conduct a survey specifically on cryptographic algorithms within embedded system benchmarks. Using the insights we gained—along with the identified strengths and weaknesses of existing algorithms and benchmarks—we developed our own benchmark, which offers significant advantages over prior benchmarks and serves as a key contribution of our work.

Additionally, we calculated the standard deviation and determined that the probability of execution time exceeding the mean plus three standard deviations is less than 1%, based on probability and statistics principles. This statistical rigor makes our benchmark stand out, ensuring a 99% probability of reliable performance.

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

There are no dependencies. The instructions for the STM32 are provided above. The code is fully implemented in our benchmark design within the code folder, and all files are in C. You just need to build and compile them. The GUI also includes a leaderboard and can be run multiple times.

## Results
This table presents the execution time statistics for different cryptographic algorithms.

| Algorithm | Average Execution Time (seconds) | Worst Execution Time (seconds) | Standard Deviation | Average + 3σ (seconds) |
|-----------|---------------------------------|-------------------------------|--------------------|-----------------------|
| 🥇PRESENT   | 0.000012                        | 0.000036                      | 0.000025           | 0.000087              |
| 🥈DES       | 0.000038                        | 0.000066                      | 0.000058           | 0.000212              |
| 🥉RSA       | 0.000084                        | 0.000213                      | 0.000169           | 0.000590              |
| AES       | 0.000168                        | 0.000275                      | 0.000345           | 0.001202              |

## Notes
- **PRESENT** has the fastest average execution time.
- **AES** has the highest variation in execution time, as indicated by its standard deviation.
- The "Average + 3σ" column provides an estimate of the worst-case scenario for each algorithm.


![image](https://github.com/user-attachments/assets/a50faeb5-2a85-4e49-91a3-d28f8efb9a83)

Automatic GUI for our Benchmark!

![image](https://github.com/user-attachments/assets/194dfa4c-684e-4eba-801f-0a5ce864639d)
## Related Links
Some links related to your project come here.
 - [PRESENT](https://www.iacr.org/archive/ches2007/47270450/47270450.pdf)
 - [DES](https://en.wikipedia.org/wiki/Data_Encryption_Standard)
 - [RSA](https://en.wikipedia.org/wiki/RSA_(cryptosystem))


## Authors
Authors and their github link come here.
- [@Arian Zamani](https://github.com/Sharif-University-ESRLab)
- [@Seyed Reza Hosseini Dolat Abadi](https://github.com/Sharif-University-ESRLab)
- [@Pardis Zahraei](https://github.com/pardissz)

