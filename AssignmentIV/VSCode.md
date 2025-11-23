VSCode Setup & Development Environment
(Environment: macOS + VSCode + Git + GitHub)
1、Development Environment
Operating System: macOS
Editor: Visual Studio Code
Git Version: 使用 macOS 內建 Git（Xcode Command Line Tools）
Compiler:
C: gcc（Apple clang）
C++: g++（Apple clang）
Terminal: macOS zsh
2、Connect VSCode to GitHub
(1) 安裝工具
已預先安裝：
Visual Studio Code
Git（macOS 內建）
(2) 在 VSCode 登入 GitHub
開啟 VSCode
左側 Extensions 搜尋：GitHub Pull Requests and Issues → Install
按下 Cmd + Shift + P
輸入：GitHub: Sign in
跟著跳出的 GitHub Browser 完成登入
（登入後 VSCode 右下角會顯示成功訊息）
3、Clone 課程 Repository
在 VSCode 按 Cmd + Shift + P
輸入：Git: Clone
貼上自己的課程 Repo URL：
https://github.com/kuoyunting/11401_CS203A.git
選擇電腦上要存放的位置
出現「Open」按鈕後打開該資料夾
4、Open Folder & File Structure
打開後可以在左側看到：
Assignment
AssignmentIV
C、CXX、Makefile 等範例檔案
5、Using VSCode Terminal
開啟 Terminal：選單列 → Terminal → New Terminal
底部會出現 zsh（工作路徑自動在專案資料夾）
可直接在這裡輸入 make / git 指令
例如：
make
make c
make cxx
make clean
git add .
git commit -m "message"
git push
6、Build & Run C / C++
切換到各自的資料夾：
AssignmentIV/C
使用 make 編譯與執行
AssignmentIV/CXX
使用 make 編譯與執行
執行後的結果都會在終端機顯示
並用螢幕擷取工具截圖放入 README.md 做提交證明
7、Git Version Control Workflow
每次修改後流程：
儲存檔案
開啟 Source Control（左側第三個圖示）
Stage 變更
填入 commit 訊息
點擊 Commit
按下 Push 把更新傳到 GitHub
8、Additional Notes
VSCode 會自動記錄 Git 變更，可在左側 Source Control 檢查
若 push 時需要 Token，可使用 GitHub PAT 登入
建議搭配 GitLens Extension 方便檢查 commit 歷史
本次作業需至少 3 次 commit（Initial / Development / Final）
