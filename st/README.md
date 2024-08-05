# st

this is my fork of st

also see:

- my config for `dwm`: https://github.com/maxhu08/dwm
- my config for `dwmblocks`: https://github.com/maxhu08/dwmblocks

## patches

patches included so far:

- `scrollback` https://st.suckless.org/patches/scrollback
  - makes it so Shift+PageUp & Shift+PageDn and mouse scrollwheel allows scrollback
- `anysize` https://st.suckless.org/patches/anysize
  - removes weird empty gap and makes terminal take up full space
- `ligatures` https://st.suckless.org/patches/ligatures
  - add ligatures for stuff like => != <= >= |>
- `undercurl` https://st.suckless.org/patches/undercurl
  - provides support for undercurl under text
- `glyph wide support` https://st.suckless.org/patches/glyph_wide_support
  - fixes wide glyphs truncation (when icons get cut off)

## quick-start

to get started run these commands:

```
git clone https://github.com/maxhu08/st
cd st
sudo make clean install
```

## showcase

my st has been patched to have proper ligature support, althought they don't work if they have separate colors (see https://st.suckless.org/patches/ligatures)

it also has undercurl and proper glyph support

![1](./screenshots/1.png)

![2](./screenshots/2.png)
