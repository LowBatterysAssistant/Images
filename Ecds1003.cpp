NODE* insertLinklist(NODE* head,int tar,int val){
    NODE* pn=head;
    if(pn){
        while(pn&&pn->data!=tar)pn=pn->next;
        if(pn){
            NODE* p=new NODE;
            p->next=pn->next;
            p->data=val;
            pn->next=p;
        }
		return head;
    }
    else{
        NODE* p=new NODE;
        p->data=val;
        p->next=0;
        return p;
    }
}
NODE* deleteLinklist(NODE* head,int tar){
    NODE* pn=head,*po;
    if(pn){
        if(pn->data==tar){
            head=pn->next;
            return head;
        }
        while(pn&&pn->data!=tar){
            po=pn;
            pn=pn->next;
        }
        if(pn){
            po->next=pn->next;
        }
    }
    return head;
}