# VideoPlayer
## 基于Opencv+QT的视频播放器（实现进度条功能，播放暂停快进功能）
项目需要实现类似这个功能，可是在网上找了许多用opencv实现的，但是都是简单的能播放，没有进度条等功能，于是自己动手写了下
配置好qt和opencv环境后点击.pro文件导入项目，即可进运行
![GHAC~QHHGFJ@86G@U_6WD_5.png](https://i.loli.net/2019/08/07/wALeY2JoCIraitx.png)
![video.gif](https://i.loli.net/2019/08/07/ZPB1d7Dwtj9AgqR.gif)
# 核心代码：
灵活控制循环，实现播放，暂停，快进慢放功能

### 功能：
- 实现进度条拖拉拽
- 视频播放暂停
- 视频快进
- 慢放
- 视频的片段拆分为图片帧
