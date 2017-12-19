import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1
import LEDs 1.0

ApplicationWindow {
    width: 1024
    height: 512

    LEDs{
        id:led
    }

    ColumnLayout{
        anchors.fill: parent
        spacing: 5

        Label{
            text:"powersupply.userName"
            font.pixelSize: 60
            color: "red"
            anchors.horizontalCenter: parent.horizontalCenter
        }


            RowLayout{
                Layout.fillWidth: true
                Label{text:"CURRENT:";font.pixelSize: 40}

                Slider{
                    Layout.fillWidth: true
                    id:mySlider1
                    value: 5
                    maximumValue: 2000
                    stepSize: 1
                    orientation: Qt.Horizontal
                }

                Label{text: Math.round(mySlider1.value) + " mA";font.pixelSize: 40}

            }

            RowLayout{
                Label{text:"VOLTAGE:";font.pixelSize: 40}
                Layout.fillWidth: true

                Slider{
                    Layout.fillWidth: true
                    id:mySlider2
                    value: 5
                    maximumValue: 24
                    stepSize: 0.001
                    orientation: Qt.Horizontal
                }

                Label{text: Math.round(mySlider2.value*1000)/1000 + " V";font.pixelSize: 40}

            }

            Rectangle{
                width : parent.width
                Layout.fillHeight: true
                Label{
                    text:"Wattage: " + Math.round((mySlider2.value * mySlider1.value)*1000)/1000 + "mWat"
                    font.pixelSize: 40
                }
            }

            RowLayout{
                Label{text:"Wattage-Limit:";font.pixelSize: 40}
                Layout.fillWidth: true

                Slider{
                    Layout.fillWidth: true
                    id:mySlider3
                    value: 5
                    maximumValue: 48000
                    stepSize: 100
                    orientation: Qt.Horizontal
                }
                Label{text: Math.round(mySlider3.value) + " mWat";font.pixelSize: 40}
            }



        Button{
            Layout.fillWidth: true
            Layout.preferredHeight:parent.height/16
            text: "led0 an"
            onClicked: {led.lightGlas(0,255,0,0);}
        }
        Button{
            Layout.fillWidth: true
            Layout.preferredHeight:parent.height/16
            text: "led1 an"
            onClicked: {led.lightGlas(1,255,0,0);}
        }
        Button{
            Layout.fillWidth: true
            Layout.preferredHeight:parent.height/16
            text: "led2 an"
            onClicked: {led.lightGlas(2,255,0,0);}
        }
        Button{
            Layout.fillWidth: true
            Layout.preferredHeight:parent.height/16
            text: "led3 an"
            onClicked: {led.lightGlas(3,255,0,0);}
        }
        Button{
            Layout.fillWidth: true
            Layout.preferredHeight:parent.height/16
            text: "leds aus"
            onClicked: {led.clear();}
        }
        Button{
            Layout.fillWidth: true
            Layout.preferredHeight:parent.height/16
            text: "close"
            onClicked:  {
                        led.close();
                        Qt.quit();
                        }
        }
    }

    Component.onCompleted: show()
}
