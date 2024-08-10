# dwm

this is my build of `dwm-6.5`


## patches

- `stacker` https://dwm.suckless.org/patches/stacker

- `vanitygaps` https://dwm.suckless.org/patches/vanitygaps

- `setborderpx` https://dwm.suckless.org/patches/setborderpx

- `tiledmove` https://dwm.suckless.org/patches/tiledmove

- `resizehere` https://dwm.suckless.org/patches/resizehere

- `dragmfact` https://dwm.suckless.org/patches/dragmfact

- `statusallmons` https://dwm.suckless.org/patches/statusallmons

- `resetlayout` https://dwm.suckless.org/patches/resetlayout


## quick-start

to get started run these commands:

```
git clone https://github.com/PikKlaxon/dwm_fork
cd dwm_fork
cd dmenu
sudo make clean install
cd..
cd dwm
sudo make clean install
cd..
cd slock
sudo make clean install
cd ..
cd slstatus
sudo make clean install
cd .. 
cd st
sudo make clean install
```

then add this to your `~/.xinitrc`

```
slstatus &
exec dwm
```

## showcase
![all](https://github.com/user-attachments/assets/c60c54c6-21fd-47b6-97e1-1d8f63561ad8)
![colors](https://github.com/user-attachments/assets/b0a5df02-d70a-4a57-b81c-7752d1e38d47)
