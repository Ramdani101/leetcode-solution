ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return head; //dicek apakah ada isinya atau ngga, kalau ngga ya kembaliin langsung nilainya
        ListNode *current = head;
        while (current != nullptr && current -> next != nullptr) //sebagai batasan juga jika next node nya null
        {
            if (current->val == current->next->val) //ngecek apakah nilai atau val dari node selanjutnya sama dengan yang saat ini
            {
                ListNode* temp = current -> next; //dimasukkin ke temp kalau sama si nodenya
                current -> next = current -> next -> next; // terus diganti penunjuk head yang sekarang nge skip node yang sama itu jadi ke terhubung lagi sama node duplikat biar aman untuk dihapus
                delete temp; //baru deh dihapus dengan aman
            }else{
                current = current -> next; //kalau ngga duplikat ya next aja
            }
            
        }
        return head;  // kembaliin head nya, karena kan dari head pasti nyambung sampe ke ujung
    }