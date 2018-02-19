import QtQuick 2.9
import QtQuick.Window 2.2


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Component.onCompleted: console.log(GameLevel.obstacles[0].x);
}
