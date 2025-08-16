import time
import random

def detect_blockage():
    # Simulate sensor data
    return random.choice([True, False])

while True:
    if detect_blockage():
        print("⚠️ Blockage detected!")
    else:
        print("✅ No blockage")
    time.sleep(2)
