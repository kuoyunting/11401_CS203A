# VSCode Setup & Development Environment
(Environment: macOS + VSCode + Git + GitHub)

---

## 1. Development Environment

Operating System: macOS (MacBook Air)  
Editor: Visual Studio Code  
Git Version: 已使用 macOS 內建 Git（Xcode Command Line Tools）  
Compiler:  
- C: gcc / clang (Apple clang version)  
- C++: g++ / clang++ (Apple clang version)  
Terminal: macOS zsh (內建終端機)

---

## 2. Connect VSCode to GitHub

### (1) 安裝必要工具
此開發環境已完成以下安裝：
- Visual Studio Code
- Git（macOS 內建）
- GitHub 帳號已可正常登入

### (2) VSCode 連接 GitHub 帳號
步驟如下：

1. 打開 VSCode  
2. 左側選單點 Extensions  
3. 搜尋：GitHub Pull Requests and Issues → Install  
4. 按下 Cmd + Shift + P  
5. 搜尋：GitHub: Sign in  
6. 跳出 GitHub Browser → 授權登入  

VSCode 成功連接 GitHub 後，可以正常 Clone / Pull / Commit / Push。

---

## 3. Clone 課程 Repository（第一次操作）

1. 在 VSCode 按 Cmd + Shift + P  
2. 輸入：Git: Clone  
3. 貼上我的課程 repo URL：  
   https: //github.com/kuoyunting/11401_CS203A.git  
4. 選擇放置資料夾  
5. Clone 完成後 VSCode 會詢問「是否開啟資料夾」→ 選擇 Open

---

## 4. Working Directory Structure

我的課程資料夾結構如下：

11401_CS203A  
└── Assignment  
    └── AssignmentIV  
        ├── C  
        ├── CXX  
        ├── README.md  
        ├── Makefile  
        ├── Makefile.bat  
        └── VSCode.md  

---

## 5. Edit / Commit / Push 操作流程

每次更新作業，我使用以下步驟：

1. 編輯檔案（如 hash_fn.c / README.md）  
2. 點 VSCode 左側 Source Control  
3. Stage Changes  
4. 撰寫 Commit Message（例如：update C hash function）  
5. 點擊 Commit  
6. 點擊「Sync Changes」或「Push」將變更推到 GitHub  

所有 commit 都會出現在 GitHub repo 裡。

---

## 6. Build & Run with VSCode Terminal

使用 VSCode 內建 Terminal（快捷鍵：Ctrl + `）：

### Build C version:
cd Assignment/AssignmentIV/C  
make  
./main  

### Build C++ version:
cd Assignment/AssignmentIV/CXX  
make  
./main  

Compilation / build / execution 都在 VSCode 的 Terminal 完成。

---

## 7. Summary

VSCode 已成功與 GitHub 整合，並在 macOS 上使用 clang / g++ 成功編譯、執行 C 與 C++ 程式。  
所有 Assignment IV 的程式均可在 VSCode Terminal 完整 build / run，並已成功 push 到 GitHub。
