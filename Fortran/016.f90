program leetcode016
    implicit none
    integer(kind=4),parameter :: arr_size = 4
    integer(kind=4),dimension(arr_size) :: arr = (/-1,2,1,4/)
    integer(kind=4) :: i,closesum,targ=1
    call bubbleSort(arr,arr_size) !here is bubbleSort while in cpp is quicksort
    do i=1,arr_size
        write(*,*) arr(i)
    end do !check bubbleSort
    call threeSumClose(arr,arr_size,targ,closesum)
    write(*,*) 'the close sum is',closesum
end program leetcode016




subroutine bubbleSort(arr,arr_size)
    implicit none
    integer(kind=4),intent(in) :: arr_size
    integer(kind=4),dimension(arr_size) :: arr
    integer(kind=4) :: i,j,temp
    do i=1,arr_size
        temp = 0
        do j=i,arr_size ! each run pick out the smallest in the left elements
            temp = arr(i)
            if(arr(j)<arr(i))then 
                temp = arr(j)
                arr(j) = arr(i)
                arr(i) = temp
            end if
        end do
    end do
    return
end subroutine bubbleSort


subroutine threeSumClose(arr,arr_size,targ,closesum)
    implicit none
    integer(kind=4),intent(in) :: arr_size,targ
    integer(kind=4),intent(out)::closesum
    integer(kind=4),dimension(arr_size) :: arr
    integer(kind=4) :: i,j,k,newsum

    closesum = arr(1)+arr(2)+arr(3)
    
    if(closesum > targ)then
        return
    end if
    
    do i=1,arr_size
        j=i+1
        k=arr_size !index in fortran is different from c and python
        do while(j<k)
            newsum = arr(i) + arr(j) + arr(k)
            if(abs(newsum-targ)<abs(closesum-targ))then
                closesum = newsum
            end if
    
            if(newsum==targ)then
                closesum = newsum
                return
            else if(newsum < targ)then
                j=j+1
            else
                k=k-1
            end if
        end do
    end do

    return
end subroutine threeSumClose

!output is 2
