program leetcode018
    implicit none
    integer(kind=4),parameter :: arr_size = 6
    integer(kind=4),dimension(arr_size) :: arr = (/1,0,-1,0,-2,2/)
    integer(kind=4) :: i,targ=0
    call bubbleSort(arr,arr_size) !here is bubbleSort while in cpp is quicksort
    do i=1,arr_size
        write(*,*) arr(i)
    end do !check bubbleSort
    call FourSum(arr,arr_size,targ)
end program leetcode018




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


subroutine FourSum(arr,arr_size,targ)
    implicit none
    integer(kind=4),intent(in) :: arr_size,targ
    integer(kind=4),dimension(arr_size) :: arr
    integer(kind=4) :: i,j,left,right
    
    do i=1,arr_size-3 !same methon as in 018.py and 018.cpp
        if(i>1 .and. arr(i-1)==arr(i))then
            cycle !see comments here
        end if
        do j=i+1,arr_size-2
            if(j>i+1 .and. arr(j-1)==arr(j))then
                cycle
            end if
            left = j + 1
            right = arr_size !here is arr_size not arr_size-1 different with python and C
            do while(left<right)
                if(arr(i)+arr(j)+arr(left)+arr(right)==targ)then
                    write(*,*)"ans:",arr(i),arr(j),arr(left),arr(right)
                    do while(left<right .and. arr(left)==arr(left+1))
                        left = left + 1
                    end do
                    do while(left<right .and. arr(right)==arr(right-1))
                        right = right -1
                    end do
                    left = left + 1
                    right = right -1
                else if(arr(i)+arr(j)+arr(left)+arr(right)<targ) then
                    left = left + 1
                else
                    right = right -1
                end if
            end do
        end do
    end do
    return
end subroutine FourSum

!output is 2
!          -2
!          -1
!           0
!           0
!           1
!           2
! ans:          -2          -1           1           2
! ans:          -2           0           0           2
! ans:          -1           0           0           1

