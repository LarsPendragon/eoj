NODE * insertLinklist(NODE * head, int tar, int val)
{
	NODE * p, * q;
	q=(NODE*)malloc(sizeof(NODE));
	q->data = val;
	if(head == NULL)
	{
		q->next = NULL;
		return q;
	}
	p = head;
	while(p->data - tar) p=p->next;
	q->next = p->next;
	p->next = q;
	return head;
}

NODE * deleteLinklist(NODE * head, int tar)
{
	NODE * p;
	if(head == NULL) return head;
	p = head;
	if(p->data == tar) return p->next;
	while(p->next!= NULL && p->next->data - tar && p->next->next != NULL) p=p->next;
	if(p->next != NULL && p->next->data == tar) p->next = p->next->next;
	return head; 
}