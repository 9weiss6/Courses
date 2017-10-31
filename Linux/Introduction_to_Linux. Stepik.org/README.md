#### With idle Wi-Fi

```
sudo modprobe -r ideapad_laptop
sudo rfkill unblock all
```
```
sudo tee /etc/modprobe.d/blacklist-ideapad.conf <<< "blacklist ideapad_laptop"
```
