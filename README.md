# 🍊OrangePi 5 mapDev BUILD SETUP

**ISO:** Ubuntu 22.04 LTS Desktop with Linux 5.10
[Download link](https://joshua-riek.github.io/ubuntu-rockchip-download/boards/orangepi-5.html)

**Must-have Dependencies:** OPENCV-4-5-0, FFmpeg 4.4

**Must-have paths with files:**
/home/orangepi/Documents ->
ardupilotmega
qwt-6.3.0
build-qwt-Desktop-Debug


---

## 📦Prerequisites
```bash
sudo apt update 
sudo apt upgrade -y 
sudo apt install aptitude
sudo apt install python3 python3-pip 
sudo apt install -y build-essential git wget cmake meson ninja-build 
```
---

## Dependencies

### Install GStreamer
```bash
sudo aptitude install libgstreamer1.0-dev 
```
### Build libpng from source
```bash
sudo apt install zlib1g-dev 
#open terminal in folder with libpng-1.4.22.tar.gz  
tar -xzf libpng-1.4.22.tar.gz 
cd libpng-1.4.22 
./configure --prefix=/usr 
make -j$(nproc) 
sudo make install 
```
### FFmpeg 4.4
```bash
sudo apt remove --purge ffmpeg libavcodec-dev libavformat-dev libavutil-dev 
sudo apt update 
sudo apt install -y \ 
    autoconf automake build-essential cmake git libass-dev libfreetype6-dev \  
    libgnutls28-dev libmp3lame-dev libnuma-dev libopus-dev libtheora-dev \  
    libtool libvorbis-dev libvpx-dev pkg-config texinfo wget yasm zlib1g-dev \  
    libx264-dev libx265-dev libxcb1-dev libxcb-shm0-dev libxcb-xfixes0-dev  

cd /tmp 
wget https://ffmpeg.org/releases/ffmpeg-4.4.tar.bz2 
tar xjf ffmpeg-4.4.tar.bz2 
cd ffmpeg-4.4 

./configure \ 
  --prefix=/usr \ 
  --pkg-config-flags="--static" \ 
  --extra-cflags="-I/usr/include" \ 
  --extra-ldflags="-L/usr/lib" \ 
  --extra-libs="-lpthread -lm" \ 
  --bindir=/usr/bin \ 
  --enable-gpl \ 
  --enable-libass \ 
  --enable-libfreetype \ 
  --enable-libmp3lame \ 
  --enable-libopus \ 
  --enable-libtheora \ 
  --enable-libvorbis \ 
  --enable-libvpx \ 
  --enable-libx264 \ 
  --enable-libx265 \ 
  --enable-nonfree 

make -j$(nproc) 
sudo make install 
sudo ldconfig 

ffmpeg -version 
```
### OpenCV 4.5.0
```bash
#open terminal in folder with OpenCV-4-5-0.sh  
chmod +x OpenCV-4-5-0.sh 
sudo ./OpenCV-4-5-0.sh 
```
---

## Qt Required Modules / Libraries
```bash
sudo apt update 
sudo apt install libsdl2-dev 
sudo apt install qtpositioning5-dev qtlocation5-dev 
sudo apt install qml-module-qtquick-dialogs qml-module-qtmultimedia \ 
    qml-module-qtquick-controls qml-module-qtquick-controls2 \  
    qml-module-qtquick-window2  
```
---


