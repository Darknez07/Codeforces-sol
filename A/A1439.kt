import java.util.*
fun main(args: Array<String>) {
    val input = Scanner(System.`in`);
    val t = input.nextInt()
    val arr = Array(t,{i->i*1})
    for(i in 0..arr.size-1){
        arr[i] = input.nextInt()
    }
    val s = LinkedHashSet<kotlin.Int>()
    val size = t - 1
    for(i in size downTo 0){
        s.add(arr[i])
    }
    val arrs = s.reversed().toIntArray()
    println(arrs.size)
    for(i in 0..arrs.size-1){
        print(arrs[i])
        print(" ")
    }
    input.close()
}