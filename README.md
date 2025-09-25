# 🍊OrangePi 5 mapDev BUILD SETUP

**ISO:** Ubuntu 22.04 LTS Desktop with Linux 5.10
[Download link](https://joshua-riek.github.io/ubuntu-rockchip-download/boards/orangepi-5.html)

**Must-have Dependencies:** OPENCV-4-5-0 (builded with FFMPEG: YES, GSTREAMER: YES), FFmpeg 4.4

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
sudo rm -f /usr/lib/libavcodec.a /usr/lib/libavformat.a /usr/lib/libavutil.a \
           /usr/lib/libswscale.a /usr/lib/libswresample.a /usr/lib/libavfilter.a \
           /usr/lib/libpostproc.a 2>/dev/null
sudo rm -f /usr/lib/pkgconfig/libav*.pc /usr/lib/pkgconfig/libsw*.pc 2>/dev/null
sudo ldconfig

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

sudo mkdir -p /opt/ffmpeg-4.4
./configure --prefix=/opt/ffmpeg-4.4 --enable-shared --disable-static --enable-pic \
            --enable-gpl --enable-nonfree \
            --enable-libx264 --enable-libx265 --enable-libvpx \
            --enable-libopus --enable-libass --enable-libfreetype \
            --enable-libaom --enable-libdav1d --enable-libmp3lame \
            --enable-libtheora --enable-libvorbis
make -j$(nproc)
sudo make install
sudo ldconfig

export PKG_CONFIG_PATH=/opt/ffmpeg-4.4/lib/pkgconfig:$PKG_CONFIG_PATH
export LD_LIBRARY_PATH=/opt/ffmpeg-4.4/lib:$LD_LIBRARY_PATH
/opt/ffmpeg-4.4/bin/ffmpeg -version
pkg-config --libs libavcodec

echo 'export PKG_CONFIG_PATH=/opt/ffmpeg-4.4/lib/pkgconfig:$PKG_CONFIG_PATH' | sudo tee /etc/profile.d/ffmpeg44.sh
echo 'export LD_LIBRARY_PATH=/opt/ffmpeg-4.4/lib:$LD_LIBRARY_PATH'           | sudo tee -a /etc/profile.d/ffmpeg44.sh
sudo chmod +x /etc/profile.d/ffmpeg44.sh
source /etc/profile.d/ffmpeg44.sh
echo '/opt/ffmpeg-4.4/lib' | sudo tee /etc/ld.so.conf.d/ffmpeg44.conf
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
                 qml-module-qtquick-window2 qml-module-qtpositioning qml-module-qtlocation \
                 qtpositioning5-plugins libqt5positioning5 libqt5location5 \
                 qml-module-qtgraphicaleffects qml-module-qt-labs-settings qml-module-qt-labs-platform \

```
---
