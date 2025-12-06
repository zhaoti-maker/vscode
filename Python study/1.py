import requests

url = "https://m10.music.126.net/20251206211412/66f9ff61cb8fffa5f1937ae9e40aea08/ymusic/000e/515c/045f/7db0112962f61b4aa6fc356d4039152d.mp3?vuutv=DTfx74bc22SRYhNdLESs85Y3AnnkXUH2/CNZXCXlpIkO6eCIUxQVQthPTM80uwPYDGCeaBB6jTV6LPmBicYYp7AAGoxwn3D5FG+6N+vmjdA=&cdntag=bWFyaz1vc193ZWIscXVhbGl0eV9leGhpZ2g"

r = requests.get(url).content

with open("music.mp3", "wb") as f:
    f.write(r)
