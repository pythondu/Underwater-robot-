#-------------------------------------------------
#
# Project created by QtCreator 2017-08-03T14:55:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = process_and_control
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    control.cpp \
    movepicture.cpp



INCLUDEPATH += /usr/local/include \
                /usr/local/include/opencv \
                /usr/local/include/opencv2

LIBS += /usr/local/lib/libopencv_highgui.so \
            /usr/local/lib/libopencv_core.so \
            /usr/local/lib/libopencv_imgproc.so \
            /usr/local/lib/libopencv_imgcodecs.so\
            /usr/local/lib/libopencv_videoio.so \
            /usr/local/lib/libopencv_video.so \
            /usr/local/lib/libopencv_videostab.so \
            /usr/local/lib/libopencv_calib3d.so \
            /usr/local/lib/libopencv_features2d.so \
            /usr/local/lib/libopencv_flann.so \
            /usr/local/lib/libopencv_ml.so \
            /usr/local/lib/libopencv_objdetect.so \
            /usr/local/lib/libopencv_photo.so \
            /usr/local/lib/libopencv_shape.so \
            /usr/local/lib/libopencv_stitching.so \
            /usr/local/lib/libopencv_superres.so

HEADERS  += mainwindow.h \
       control.h \
    movepicture.h

FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
