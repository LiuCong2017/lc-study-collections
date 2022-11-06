<script lang="ts">
/**
 * 和watch的区别：
 *
 * 运行时机不同，watchEffect会立即执行，相当于设置了immediate: true的watch。
 * watchEffect无法获取改变前后的值。
 * 与watch显示的指定依赖源不同，watchEffect会自动收集依赖源。
 */
const name = ref<string>('张三')
const age = ref<number>(18)

watchEffect(() => {
  console.log(`${name.value}：${age.value}`) // 张三：18
})

setTimeout(() => {
  name.value = '李四' // 李四：18
}, 3000)

setTimeout(() => {
  age.value = 20 // 李四：20
}, 5000)
</script>
