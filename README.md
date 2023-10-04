# nd0013_cd2693_Exercise_Starter_Code

## Dependencies
Before you proceed to use the exercises in this repository, ensure that your development environment is configured with the following tools and dependencies:

- C++ - [VSCode install](https://docs.microsoft.com/en-us/cpp/build/vscpp-step-0-installation) or [general install](https://www.tutorialspoint.com/cplusplus/cpp_environment_setup.htm) 
- [OpenCV](https://docs.opencv.org/4.x/d7/d9f/tutorial_linux_install.html)
- [CMake](https://cmake.org/install/)
- Make - Use either one of the following options:
    - [Windows](http://gnuwin32.sourceforge.net/packages/make.htm)
    - [Mac](https://stackoverflow.com/questions/10265742/how-to-install-make-and-gcc-on-a-mac)
    - [Linux](https://askubuntu.com/questions/161104/how-do-i-install-make)
- [VSCode](https://code.visualstudio.com/download), or a similar IDE
- The [CARLA simulator](https://carla.org/)
- [PCL](https://pointclouds.org/downloads/) (Point Cloud Library)
- [Eigen Library for C++](https://eigen.tuxfamily.org/index.php?title=Main_Page)

## Fork and Clone the Repository
Fork the repository to your Github account and clone it to your local development environment using the following commands:

```bash
git clone https://github.com/udacity/nd0013_cd2693_Exercise_Starter_Code.git
cd nd0013_cd2693_Exercise_Starter_Code
```

# Instructions to Execute the Exercise Solution

## Lesson_2_C++_Checkpoint Exercises

Navigate to the individual challenge sub-directory containing the **main.cpp** file. For example, change to the **challenge1/** solution directory.

```bash
cd Lesson_2_C++_Checkpoint/solutions/solution1/
```

Update the **main.cpp** file where needed, and execute the following commands.

```bash
g++ main.cpp
./a.out
```


## Lesson_3_Markov_Localization Exercises

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


## Lesson_4_Intro_to_PCL Exercises

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


## Lesson_5_Creating_Scan_Matching_Algorithms

```bash
cd Lesson_5_Creating_Scan_Matching_Algorithms
```

This lesson has the following exercises. 

```bash
.
├── Exercise-Creating-ICP
├── Exercise-Creating-NDT
└── Exercise-Intro-to-ICP
```

The specific command for each exercise in available in the respective sub-directory. However, here is the generic instructions applicable to all exercises in this lesson. The commands below will update the PATH, CUDA_HOME, and LD_LIBRARY_PATH environment variables.

```bash
export PATH=/opt/ros/kinetic/bin:/usr/local/cuda-9.0/bin:/opt/pytorch/bin:/opt/utils/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/opt/VirtualGL/bin:/opt/TurboVNC/bin:/opt/swift/swift-4.0.3-RELEASE-ubuntu16.04/usr/bin${PATH:+:${PATH}}

source /opt/carndcapstone/venv/bin/activate

export LD_LIBRARY_PATH=/opt/carndcapstone/cuda-8.0/extras/CUPTI/lib64/:/opt/carndcapstone/cuda-8.0/lib64/:/opt/ros/kinetic/lib${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}

export CUDA_HOME=/opt/carndcapstone/cuda-8.0

ln -sf /home/workspace/simulator.desktop /root/Desktop/simulator.desktop

alias pip='python -m pip'

cd /home/workspace
```

## Lesson_6_Utilizing_Scan_Matching

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

The specific command for each exercise in available in the respective sub-directory. 

In addition, update the environment variables, where needed. 

## Lesson_7_Project_Scan_Matching_Localization

```bash
cd Lesson_7_Project_Scan_Matching_Localization
```

Compile
```bash
cd c3-project
cmake .
make
```
Run

```java
su - student // Ignore Permission Denied, if you see student@ you are good
cd c3-project
./run_carla.sh
// Create new tab
cd c3-project
./cloud_loc // Might have core dump on start up, just rerun if so. Crash doesn't happen more than a couple of times
``````