install g++ 
go to ur g++ include path, make a flder called bits, then make a file called stdc++.h and put this all in that https://gist.githubusercontent.com/Einstrasse/ac0fe7d7450621a39364ed3b05cacd11/raw/e1dc9b6c9221f1477d52bab918c9e8e34bb362f4/bits-stdc++.h

open vsc 
Cmd+shift+p, type "Shell Command: Install 'code' command in PATH" and hit enter and type in ur admin password and shit
cmd+shift+p then type "open keyboard shortcuts"
click on the one that isnt read-only and is empty
paste this in 
```json
[[
    {
        "key": "cmd+shift+n",
        "command": "workbench.action.tasks.runTask",
        "args": "Create Competitive Programming File"
    },
    {
        "key": "cmd+shift+r",
        "command": "workbench.action.tasks.runTask",
        "args": "Compile and Run C++ File"
    }
]
]
```

unzip folder

in the folder run 
```bash
chmod +x .vscode/util/c_r.sh
```

use cmd+shift+n to make a new cp tempalte file & use cmd+shift+r to run

you might also want to configure C++ setup in c_cpp_properties.json and settings.json , i have a very weird setup 