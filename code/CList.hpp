class CList { // Base class for a lot of other classes 
public:
    CList(); // 
    virtual ~CList();
    virtual void func4() {};         
    virtual void func8() {};      // Finalizer
    void func_002833CC(CList *);  // Insert a node?
    void func_xxxxxxxx(CList *);  // Append a node? (Inlined?)
    void func_0028158C(void);     // Remove a node?
    void func_0027FFB0(void);     // Remove all the nodes 
    CList *unk4; // mNext
    CList *unk8; // mPrev
};
