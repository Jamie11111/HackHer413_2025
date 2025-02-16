import serial;
import requests;

arduino = serial.Serial("COM3", 9600)

while True:
    try:
        data = arduino.readline().decode().strip()
        if data.isdigit():
            count = int(data)
            print(f"Sharing that the button has been pressed {count} times!")

            response = requests.post("http://localhost:3000/api/counter", json={"count": count})
            print("Response:", response.json())
    except Exception as err:
        print("Error:", err) 