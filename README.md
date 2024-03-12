# printf systemd progress bar.c

## 1.介绍

一个有趣的小东西，输出像`systemd`启动输出一样的提示符\
没有任何输入(因为不会做啦，不过也不是很想立刻去查)

## 2.输出展示

输出类似这样(实际是有颜色的啦):

```text
[  OK  ] starting cpsklryvm
[  OK  ] starting jnb
[  OK  ] starting wllsrehfm
[  OK  ] starting kecwitrsgl
[  OK  ] starting xvtjmxypunbq
[  OK  ] starting xmuvgfajc
[  OK  ] starting venhyuhu
[  OK  ] starting josamibdnj
[  OK  ] starting eyhk
[  OK  ] starting ombltouujdr
[  OK  ] starting crrcgbflqp
[  OK  ] starting tpegrwv
[  OK  ] starting jcrgwdlp
[  OK  ] starting tydvhe
[  OK  ] starting usippyvxsuvb
[  OK  ] starting enodqasa
```

## 3.编译

这么小的东西就不放二进制文件了吧\
使用`gcc`编译的示例

```bash
# build
gcc main.c --output main.out
# run
./main
```

## 4.碎碎念

话说这些东西在 **2024年2月16日星期五 CST**左右 就写完了，当时连git仓库都没用初始化，怎么这么懒啦
