// SPDX-License-Identifier: MIT
// cctest_csmith_2e516aeb.c --- cctest case csmith_2e516aeb (csmith seed 777087723)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x410ef3ec */
/* @exp_ticks 0x6136 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 777087723 -o /tmp/csmith_gen_lvt_c4xx/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int64_t  f0;
   uint64_t  f1;
   int16_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint16_t  f0;
   uint32_t  f1;
   struct S0  f2;
   const int16_t  f3;
};
#pragma pack(pop)

struct S2 {
   uint64_t  f0;
   const uint8_t  f1;
   int32_t  f2;
   const int32_t  f3;
   int16_t  f4;
   struct S0  f5;
};

union U3 {
   uint16_t  f0;
   uint64_t  f1;
   int64_t  f2;
};

union U4 {
   int32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
};

union U5 {
   const int32_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   uint16_t  f3;
};


static int32_t g_3 = 0xDF7CD95DL;
static uint32_t g_4 = 18446744073709551606UL;
static const struct S2 g_19 = {18446744073709551615UL,0xA1L,4L,-4L,0x4153L,{1L,1UL,0x7A05L}};
static int8_t g_23[5][5] = {{0xA1L,0xA1L,0xA1L,0xA1L,0xA1L},{0xD0L,0xD0L,0xD0L,0xD0L,0xD0L},{0xA1L,0xA1L,0xA1L,0xA1L,0xA1L},{0xD0L,0xD0L,0xD0L,0xD0L,0xD0L},{0xA1L,0xA1L,0xA1L,0xA1L,0xA1L}};
static uint16_t g_45 = 1UL;
static uint32_t g_66 = 1UL;
static int16_t g_70[5][1] = {{0L},{0L},{0L},{0L},{0L}};
static uint32_t g_84[5] = {0UL,0UL,0UL,0UL,0UL};
static int8_t g_114 = 0x86L;
static int64_t g_115[3] = {0L,0L,0L};
static uint64_t g_143 = 0xFABF27EFC0AEFA70LL;



static int16_t  func_1(void);
static uint32_t  func_5(uint8_t  p_6, union U5  p_7);
static union U5  func_8(union U4  p_9, struct S2  p_10, uint8_t  p_11, int8_t  p_12, uint16_t  p_13);
static union U4  func_14(const struct S2  p_15, struct S0  p_16, uint32_t  p_17, struct S0  p_18);




static int16_t  func_1(void)
{ 
    uint8_t l_2[5][5] = {{0xDDL,0x65L,0xDDL,1UL,1UL},{0xDDL,0x65L,0xDDL,0xDDL,0xDDL},{0xD1L,0xD0L,0xD1L,0xDDL,0xDDL},{0xD1L,0xD0L,0xD1L,0xDDL,0xDDL},{0xD1L,0xD0L,0xD1L,0xDDL,0xDDL}};
    int32_t l_126 = 1L;
    uint8_t l_141 = 0x9AL;
    int32_t l_142 = 1L;
    int16_t l_150 = (-1L);
    int i, j;
    for (g_3 = 4; (g_3 >= 0); g_3 -= 1)
    { 
        g_4 = 9L;
        for (g_4 = 0; (g_4 <= 4); g_4 += 1)
        { 
            struct S0 l_20 = {-8L,0x8909FF4C90EB1F0CLL,7L};
            struct S0 l_21 = {0L,0x680DD333F0D22965LL,0xD292L};
            int32_t l_116 = (-5L);
            int i, j;
            l_116 &= ((l_2[g_4][g_4] == 2L) != func_5(l_2[1][2], func_8(func_14(g_19, l_20, l_20.f1, l_21), g_19, g_4, l_20.f0, g_19.f4)));
        }
    }
    g_3 = (safe_sub_func_int16_t_s_s(((!(safe_div_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((g_19.f5.f0 ^ (safe_add_func_int8_t_s_s((l_126 = 0x25L), g_84[0]))) & (safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(g_19.f3, g_3)), g_19.f2))), g_3)) , l_126), 0x86L))) > g_45), l_2[0][2]));
    for (g_45 = (-4); (g_45 > 47); g_45++)
    { 
        uint32_t l_139 = 4294967289UL;
        uint16_t l_144[1][3];
        int32_t l_149 = 0x814FFF49L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_144[i][j] = 0x6729L;
        }
        g_3 = ((g_143 &= (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((g_19.f2 || ((l_139 && ((~(l_141 && l_139)) > 9L)) < 0xFB15E95442C49E95LL)), l_142)), g_19.f2))) | l_144[0][2]);
        g_3 = l_126;
        if (l_142)
        { 
            struct S1 l_148 = {0UL,18446744073709551614UL,{0L,0UL,1L},0x45D9L};
            g_3 &= (+((safe_div_func_int8_t_s_s((-3L), (l_148 , g_19.f5.f1))) && (0x4F713FB69F9E04B2LL | g_19.f5.f0)));
            return l_148.f2.f2;
        }
        else
        { 
            l_149 |= l_2[4][2];
        }
    }
    return l_150;
}



static uint32_t  func_5(uint8_t  p_6, union U5  p_7)
{ 
    const int32_t l_71 = 0xF40280C1L;
    int32_t l_92 = 0x7F3FAEFDL;
    int64_t l_100 = (-9L);
    union U3 l_105[1] = {{65535UL}};
    int i;
    for (p_7.f3 = 0; (p_7.f3 > 26); p_7.f3 = safe_add_func_int64_t_s_s(p_7.f3, 9))
    { 
        uint32_t l_57 = 0xDC3605A4L;
        int32_t l_69 = (-3L);
        int32_t l_72 = (-5L);
        int32_t l_83 = 0x57498DD0L;
        l_72 = (((l_69 = (safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u(((g_19.f1 , (safe_rshift_func_int16_t_s_u((((--l_57) < ((safe_lshift_func_uint16_t_u_s((g_45 = ((g_19.f2 && (((safe_div_func_uint64_t_u_u(((((safe_mod_func_uint64_t_u_u((g_66 = 0xA884A18462423037LL), (g_70[0][0] = (safe_div_func_uint8_t_u_u(g_19.f5.f2, l_69))))) | p_7.f3) != 0x1CD8L) , g_66), 0xB3F584DD3EA5DEB7LL)) && l_71) || p_6)) & p_7.f2)), 9)) >= g_19.f5.f2)) >= 0UL), l_69))) & 0x63468C50A102B466LL), 3L)) >= 249UL) <= l_69) && l_71), 0x1748L))) | p_7.f3) != 0x934B7DDD9CFB06A0LL);
        l_83 &= (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((0UL & ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_23[1][2] | 0xA6E09213L), (0xB6CEA374L == l_72))), l_71)) && l_71)), p_6)), l_69)), 0UL));
        if (l_71)
            continue;
    }
    if (((--g_84[0]) >= ((safe_mul_func_uint8_t_u_u(p_7.f2, g_3)) & 0x79A8L)))
    { 
        int8_t l_89 = 1L;
        l_89 = 5L;
    }
    else
    { 
        uint8_t l_97 = 0xBCL;
        for (p_7.f2 = 20; (p_7.f2 <= 24); p_7.f2 = safe_add_func_int64_t_s_s(p_7.f2, 8))
        { 
            l_92 = 0xE4AC2E13L;
            l_100 = ((safe_lshift_func_int16_t_s_u(((((65535UL || (safe_mod_func_int32_t_s_s(((l_97 | (safe_lshift_func_int16_t_s_u(1L, (0x8E729AE47ACEDFCDLL == (-4L))))) <= (-7L)), g_19.f0))) <= 254UL) == l_97) & 0xCAL), 4)) == 0xBA1FL);
        }
    }
    g_115[2] = (safe_add_func_uint64_t_u_u((g_114 = (safe_mod_func_int16_t_s_s(((g_19.f2 , l_105[0]) , (safe_sub_func_uint8_t_u_u(((p_7.f2 | ((((l_92 = (safe_mod_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((((p_6 | 255UL) != p_7.f2) && g_19.f1), p_7.f2)) != p_7.f2), 7)) != p_7.f2) && p_7.f2) ^ (-8L)), l_71))) != p_6) || 18446744073709551615UL) && l_92)) ^ p_7.f2), p_7.f2))), l_105[0].f0))), 0xA88DA45BD7646EDFLL));
    return l_100;
}



static union U5  func_8(union U4  p_9, struct S2  p_10, uint8_t  p_11, int8_t  p_12, uint16_t  p_13)
{ 
    int32_t l_29 = 0x6A90D263L;
    struct S0 l_34 = {0x4E48EC3DF54D9846LL,0x248BDD0C5DF97F74LL,-1L};
    struct S1 l_35 = {65532UL,1UL,{0x41E7D42A80B09DE2LL,0UL,-1L},-1L};
    union U5 l_48 = {8L};
    for (p_9.f3 = 0; (p_9.f3 >= 25); ++p_9.f3)
    { 
        const int32_t l_30 = 0x2FD97811L;
        p_10.f2 = (0x5D6F9C23L < (safe_mod_func_int32_t_s_s(g_4, (l_29 , l_30))));
    }
    p_10.f2 = ((safe_div_func_uint8_t_u_u((+(((l_34 , ((l_35 , ((((safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((p_10.f3 | ((!(safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((-1L), 0xB7C5EFF0D54DF963LL)), p_10.f1))) && 0L)), g_19.f1)), l_29)) > l_35.f1) >= l_35.f2.f1) != g_23[3][4])) <= p_9.f0)) & 0xD9175C22L) && p_12)), 255UL)) || p_9.f1);
    --g_45;
    return l_48;
}



static union U4  func_14(const struct S2  p_15, struct S0  p_16, uint32_t  p_17, struct S0  p_18)
{ 
    int32_t l_22 = (-4L);
    union U4 l_24 = {-3L};
    g_23[0][2] = (l_22 && 0UL);
    return l_24;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    transparent_crc(g_19.f2, "g_19.f2", print_hash_value);
    transparent_crc(g_19.f3, "g_19.f3", print_hash_value);
    transparent_crc(g_19.f4, "g_19.f4", print_hash_value);
    transparent_crc(g_19.f5.f0, "g_19.f5.f0", print_hash_value);
    transparent_crc(g_19.f5.f1, "g_19.f5.f1", print_hash_value);
    transparent_crc(g_19.f5.f2, "g_19.f5.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_23[i][j], "g_23[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_70[i][j], "g_70[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);

    }
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_115[i], "g_115[i]", print_hash_value);

    }
    transparent_crc(g_143, "g_143", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
