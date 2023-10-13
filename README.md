# nd0013_cd2693_Exercise_Starter_Code

## Dependencies
Before you practice the exercises in this repository, ensure that your development environment is configured with the following tools and dependencies:

- [CARLA simulator 0.9.9.4](https://github.com/carla-simulator/carla/releases/tag/0.9.9) 
- [NICE DCV Server](https://docs.aws.amazon.com/dcv/latest/adminguide/setting-up-installing-linux-prereq.html). This step will install Nvidia drivers along with CUDA libraries for the underlying Tesla T4 GPU
- C++ 
- Git
- [OpenCV](https://docs.opencv.org/4.x/d7/d9f/tutorial_linux_install.html)
- [CMake](https://askubuntu.com/questions/161104/how-do-i-install-make) and Make
- [VSCode](https://code.visualstudio.com/download), or a similar IDE
- [Eigen Library for C++](https://eigen.tuxfamily.org/index.php?title=Main_Page)
- [Point Cloud Library](https://pointclouds.org/downloads/)
- Python3 and Pip
- ROS


# Instructions

## Step 1: Fork and Clone the Repository
Fork the repository to your Github account and clone it to your local development environment using the following commands:

```bash
git clone https://github.com/udacity/nd0013_cd2693_Exercise_Starter_Code.git
cd nd0013_cd2693_Exercise_Starter_Code
```

Next, select the lesson you want to practice. The sections below outline the lesson-specific instructions.

## Step 2: Practice the Exercises or the Project
<br />

### Lesson_2_C++_Checkpoint Exercises

Navigate to the individual challenge sub-directory containing the **main.cpp** file. For example, change to the **challenge1/** solution directory.

```bash
cd Lesson_2_C++_Checkpoint/solutions/solution1/
```

Update the **main.cpp** file where needed, and execute the following commands.

```bash
g++ main.cpp
./a.out
```

<br /><br />

### Lesson_3_Markov_Localization Exercises

Change to the specific exercise directory, compile the **main.cpp** file, and execute the **a.out**. For example, the command below will help you run the  **1-initialize-priors-function** exercise solution. 

```bash
cd Lesson_3_Markov_Localization/markov/1-initialize-priors-function
```

Refer to the **Guide-[exercise-name].ipynb** for the specific instructions on how to update the **main.cpp** file. If you need help, you can compare your edits with the provided solution.

```bash
cd solution
g++ main.cpp  
./a.out
```

<br /><br />

### Lesson_4_Intro_to_PCL Exercises

Refer to the exercise starter files in the [](https://github.com/udacity/SFND_Lidar_Obstacle_Detection) repository. 

```bash
cd Documents
git clone https://github.com/udacity/SFND_Lidar_Obstacle_Detection.git
cd SFND_Lidar_Obstacle_Detection
```

Here is the file structure in the Github repository linked above.

```bash
.
├── CMakeLists.txt
├── CODEOWNERS
├── README.md
├── media
│   └── ObstacleDetectionFPS.gif
└── src
    ├── environment.cpp
    ├── processPointClouds.cpp
    ├── processPointClouds.h
    ├── quiz
    │   ├── cluster
    │   └── ransac
    ├── render
    │   ├── box.h
    │   ├── render.cpp
    │   └── render.h
    └── sensors
        ├── data
        └── lidar.h
```
Refer the [README.md](https://github.com/udacity/SFND_Lidar_Obstacle_Detection#readme) for specific instructions. 

<br /><br />

### Lesson_5_Creating_Scan_Matching_Algorithms

```bash
cd Lesson_5_Creating_Scan_Matching_Algorithms
```

This lesson has the following exercises. 

```bash
.
├── Exercise-Intro-to-ICP
├── Exercise-Creating-ICP
└── Exercise-Creating-NDT
```

The specific commands for each exercise are available in the respective sub-directory. Follow the instructions per the respective README files.

|Exercise|README|
|---------|---------|
|Exercise-Intro-to-ICP|[README](/Lesson_5_Creating_Scan_Matching_Algorithms/Exercise-Intro-to-ICP/README.md)|
|Exercise-Creating-ICP|[README](/Lesson_5_Creating_Scan_Matching_Algorithms/Exercise-Creating-ICP/README.md)|
|Exercise-Creating-NDT|[README](/Lesson_5_Creating_Scan_Matching_Algorithms/Exercise-Creating-NDT/README.md)|


<br /><br />

### Lesson_6_Utilizing_Scan_Matching

```bash
cd Lesson_6_Utilizing_Scan_Matching
```

This lesson has the following exercises.

```bash
.
├── Exercise-ICP-Alignment
├── Exercise-Mapping
└── Exercise-NDT-Alignment
```

The specific command for each exercise in available in the respective sub-directory. Follow the instructions per the respective README files.

|Exercise|README|
|---------|---------|
|Exercise-ICP-Alignment|[README](/Lesson_6_Utilizing_Scan_Matching/Exercise-ICP-Alignment/README.md)|
|Exercise-NDT-Alignment|[README](/Lesson_6_Utilizing_Scan_Matching/Exercise-NDT-Alignment/README.md)|
|Exercise-Mapping|[README](/Lesson_6_Utilizing_Scan_Matching/Exercise-Mapping/README.md)|



<br /><br />

### Lesson_7_Project_Scan_Matching_Localization

Navigate to the project starter code director. 

```bash
cd nd0013_cd2693_Exercise_Starter_Code/Lesson_7_Project_Scan_Matching_Localization/c3-project
```

Follow the instructions per the specific [README](/Lesson_7_Project_Scan_Matching_Localization/c3-project/README.md). 
