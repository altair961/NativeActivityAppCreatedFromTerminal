# VRModelViewer

This is an Android project with a native activity and Ant building system written on C++

First we need to run ndk-build in the root directory of the project.

If you do not have build.xml file in the root directory of the project
you need first generate it:

android update project --path . -t 1

-t 1 means we set our target id to 1. To list all options we need to run:

android list targets

That will generate build.xml file that is required for building with ant
Then we need to run:

ant debug

Next we have to change to directory with newly generated apk file like so:

cd /native-activity-example/bin/

Then execute following command in order to install it to the device:

adb install -r NativeActivity-debug.apk

