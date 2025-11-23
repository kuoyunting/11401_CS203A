以下為我對 C 與 C++ 兩個版本的 hash function 在不同 table size（m）下的輸出、碰撞情況與分布分析。

1、Observation (C Version)
Table size m = 10
<img width="345" height="228" alt="截圖 2025-11-24 凌晨3 12 22" src="https://github.com/user-attachments/assets/a91865d7-8218-45cc-8e10-0cc51a7e7b22" />

Analysis
- m = 10 是「10 的倍數」，容易讓 `key % 10` 產生規律性分布。
- 你可以看到許多 keys 聚集在固定的 index（尤其是 0、2、4、6、8）。
- 這代表 **碰撞比較多、分布不夠均勻**。
- 使用 m=10 這種「非質數」會讓 hash 分布變差。

Table size m = 11
<img width="214" height="201" alt="截圖 2025-11-24 凌晨3 12 30" src="https://github.com/user-attachments/assets/18185bbc-734f-420d-b97d-ae828c1d4501" />

Analysis
- m = 11（質數）時分布明顯比較平均。
- 幾乎每個 key 都落在不一樣的位置，碰撞減少。
- 顯示質數表大小可以有效改善 hash 分布。

2、Observation (C++ Version)
Table size m = 10
<img width="435" height="228" alt="截圖 2025-11-24 凌晨3 12 46" src="https://github.com/user-attachments/assets/651e74c9-35c2-48fa-bf6f-c26078e4a9c0" />

Analysis
- C++ 自訂的字串 hash（DJB2）遇到 m=10 也會出現明顯的模數規律。
- 若大量字串有類似開頭或 ASCII 分布，會產生許多 index 重複。
- 表現比 m=11 差。
  
Table size m = 11
<img width="327" height="202" alt="截圖 2025-11-24 凌晨3 12 52" src="https://github.com/user-attachments/assets/0988025e-1cf2-497e-a194-03a8f9fbeb23" />

Analysis
- m=11 使 DJB2（或任何字串 hash）在 mod 之後得到更自然的分布。
- 明顯看到 index 分布比較均勻。
- 幾乎沒有非常明顯的 clustering（集中區塊）。


Final Conclusion

m = 10（非質數）
  - 無論是 integer hash 或 string hash，都明顯出現 pattern clustering。  
  - 更多碰撞、某些 index 被塞滿。  
  - 分布不平均。

m = 11（質數）
  - 分布普遍比較均勻。  
  - 碰撞數量降低。  
  - Hash function 的效果在 m 為質數時更佳。

結論：在實際設計 hash table 時，選擇「質數」作為 table size m，能明顯改善 hash 分布品質。
