l = [1,3,4,6,4,9,7,11,13]
best = [0]*(len(l)+1)
def search(state,target,nums,best):
    if target == 0:
        if len(state)<len(best):
            best = state
        return
    elif target<0:
        return
    for i in range(len(nums)):
        search(state+[nums[i]],target - nums[i],nums[i+1:],best)

search([],10,l,best)
print(best)
