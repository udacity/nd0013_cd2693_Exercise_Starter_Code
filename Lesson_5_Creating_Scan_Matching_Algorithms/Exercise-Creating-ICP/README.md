# Exercise: Creating ICP

## Setting up the workspace
Before you open a terminal in this workspace, you must run the folowing commands.
```
export PATH=/opt/ros/kinetic/bin:/usr/local/cuda-9.0/bin:/opt/pytorch/bin:/opt/utils/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/opt/VirtualGL/bin:/opt/TurboVNC/bin:/opt/swift/swift-4.0.3-RELEASE-ubuntu16.04/usr/bin${PATH:+:${PATH}}

source /opt/carndcapstone/venv/bin/activate

export LD_LIBRARY_PATH=/opt/carndcapstone/cuda-8.0/extras/CUPTI/lib64/:/opt/carndcapstone/cuda-8.0/lib64/:/opt/ros/kinetic/lib${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}

export CUDA_HOME=/opt/carndcapstone/cuda-8.0

ln -sf /home/workspace/simulator.desktop /root/Desktop/simulator.desktop

alias pip='python -m pip'

cd /home/workspace
```
The commands will update the PATH, CUDA_HOME, and LD_LIBRARY_PATH environment variables.  

## ToDo
Complete the TODO's in `icp2-main.cpp` as detailed on the previous page.

## How to compile

** Make Sure GPU Is Enabled**

from `/home/workspace `:

`cmake .`

`make`

## How to run:
`./icp`

Note that any visualizations will appear only the remote desktop; if you work in the workspace IDE you will need to click on the "Desktop" button in the bottom right, and only run the executable from the terminal within the remote desktop to view them.