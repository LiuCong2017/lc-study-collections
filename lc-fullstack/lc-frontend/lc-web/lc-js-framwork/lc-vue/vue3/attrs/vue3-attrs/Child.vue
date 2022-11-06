<template>
  <div>
    <span>hello：{{ props.name }}</span>
  </div>
</template>

<script lang="ts">
export default {
  inheritAttrs: false
}
</script>

<script lang="ts" setup>
/**
 * Vue3中，$attrs包含父组件中除props和自定义事件外的所有属性集合。
 *
 * 不同于Vue2，$attrs包含了父组件的事件，因此$listenners则被移除了
 */
const props = defineProps(['name'])

const attrs = useAttrs()
console.log('attrs', attrs)
</script>