# Smart File Organizer (智慧型檔案總管)

**Smart File Organizer** 是一款革命性的桌面檔案管理應用程式。透過將強大的 AI 技術整合到檔案管理器中，它讓您能夠自動分析、標記並探索您的文件，且無需將資料傳送到雲端，完全保障隱私。

![C++](https://img.shields.io/badge/Language-C++20-blue.svg)
![Qt](https://img.shields.io/badge/Framework-Qt_6-green.svg)
![AI](https://img.shields.io/badge/AI-llama.cpp-orange.svg)

## 🌟 功能特色 (Features)

*   **🤖 本地端 AI 智慧核心**：內建 `llama.cpp` 引擎，可直接在您的 CPU/GPU 上執行 Llama 3、Mistral 等大型語言模型 (LLM)，無需連網。
*   **🏷️ 智慧標籤建議**：自動分析文字檔、程式碼、PDF 和 Office 文件，並建議相關的標籤（支援繁體中文）。
*   **🔒 隱私優先設計**：您的所有資料運算都在本機完成，資料絕不出門，實現 100% 離線使用。
*   **🕸️ 關聯圖視覺化**：透過互動式的力導向圖 (Files Graph)，視覺化呈現檔案與標籤之間的關聯網絡。
*   **📄 多格式支援**：
    *   **純文字/程式碼**：C++, Python, Markdown, Log 檔等。
    *   **辦公文件**：Microsoft Word (.docx), Excel (.xlsx), PDF (基礎文字提取)。
*   **🔍 即時搜尋過濾**：依據檔名或標籤，毫秒級快速篩選檔案。
*   **📂 遞迴掃描管理**：輕鬆掃描與管理複雜的巢狀資料夾結構。

## 🛠️ 環境需求 (Prerequisites)

若要編譯與執行本專案，您需要：

*   **作業系統**：Windows 10 / 11 (目前針對 MinGW 環境優化)
*   **編譯器**：MinGW-w64 (GCC 11+) 或 MSVC 2019+
*   **開發框架**：Qt 6.x (包含模組：`Widgets`, `Concurrent`, `Network`)
*   **建置系統**：CMake 3.16+
*   **硬體建議**：建議 8GB 以上記憶體。若有獨立顯卡 (Discrete GPU) 可加速 AI 推論。

## 🚀 建置教學 (Building)

1.  **複製專案代碼 (Clone)**：
    ```bash
    git clone https://github.com/your-username/smart-file-organizer.git
    cd smart-file-organizer
    ```

2.  **建立建置目錄**：
    ```bash
    mkdir build
    cd build
    ```

3.  **使用 CMake 設定專案**：
    ```bash
    cmake .. -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release
    ```

4.  **開始編譯**：
    ```bash
    cmake --build . --parallel 8
    ```

5.  **執行程式**：
    在 `build` 目錄下執行 `SmartFileOrganizer.exe`。

## 📖 使用說明 (Usage Guide)

1.  **準備 AI 模型**：請先從 [Hugging Face](https://huggingface.co/) 下載 GGUF 格式的模型檔案（推薦 `llama-3` 或 `LlaVA` 系列，例如 `Meta-Llama-3-8B-Instruct.Q4_K_M.gguf`）。
2.  **啟動程式**：打開 `SmartFileOrganizer`。
3.  **載入模型**：點擊工具列上的 **「載入模型 (Load Model)」** 按鈕，選擇您的 `.gguf` 檔案。
4.  **開啟資料夾**：點擊 **「開啟資料夾 (Open Folder)」** 選擇您要整理的目標目錄。
5.  **開始分析**：點擊列表中的任一檔案，按下右側的 **「分析檔案 (Analyze File)」**。AI 將會讀取內容並建議標籤。
6.  **探索關聯**：切換到 **「關聯視圖 (Graph)」** 分頁，體驗檔案之間的連結！

## 📦 使用的開源專案 (Dependencies)

*   [llama.cpp](https://github.com/ggerganov/llama.cpp) - 輕量級 C/C++ Llama 模型推論庫。
*   [nlohmann/json](https://github.com/nlohmann/json) - 現代 C++ JSON 解析庫。
*   [miniz](https://github.com/richgel999/miniz) - ZIP 壓縮/解壓縮庫 (用於解析 Office 文件)。
*   [Qt](https://www.qt.io/) - 跨平台應用程式開發框架。

## 📄 授權 (License)

本專案為開源軟體。
