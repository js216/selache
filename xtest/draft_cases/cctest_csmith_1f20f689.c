// SPDX-License-Identifier: MIT
// cctest_csmith_1f20f689.c --- cctest case csmith_1f20f689 (csmith seed 522253961)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30da8843 */

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

// Options:   -s 522253961 -o /tmp/csmith_gen_srqtgdg2/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint8_t g_7 = 0x00L;
static int32_t g_28 = (-8L);
static int8_t g_30[2][3] = {{0L,0L,0L},{0L,0L,0L}};
static uint64_t g_31 = 4UL;
static int16_t g_44 = 0x5602L;
static int32_t g_46 = 0xA832A49EL;
static int32_t g_53 = 0xD7EFBAE5L;
static uint16_t g_55 = 1UL;
static int32_t g_107 = 0xF5C31AFCL;
static int32_t g_113 = 1L;
static int32_t g_134 = 3L;
static uint64_t g_142 = 18446744073709551611UL;
static uint32_t g_156 = 0x86BA2272L;
static int32_t g_166 = (-9L);
static uint8_t g_167 = 255UL;



static uint64_t  func_1(void);
static int32_t  func_2(int16_t  p_3, uint16_t  p_4);
static int32_t  func_8(uint8_t  p_9, uint8_t  p_10);




static uint64_t  func_1(void)
{ 
    uint64_t l_17 = 0x7C4D1454BCD76CE4LL;
    uint64_t l_18 = 18446744073709551615UL;
    int32_t l_149 = (-1L);
    int32_t l_154 = 0x09C6F5E5L;
    int32_t l_155 = 0xAD979371L;
    l_149 = func_2(((((safe_div_func_uint64_t_u_u(g_7, ((g_113 ^= func_8((safe_unary_minus_func_int32_t_s((!((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(l_17, ((l_17 > 0xA5L) || g_7))), g_7)) ^ 0x0DDDL)))), l_18)) || 0x9A55A05DL))) & l_18) && 0x9F59L) >= l_17), g_30[1][2]);
    if ((safe_add_func_int32_t_s_s((0xEE36L <= 3UL), 0x989DC580L)))
    { 
        g_46 = (g_28 = (-1L));
    }
    else
    { 
        uint16_t l_152[2];
        int32_t l_153[4][4] = {{0x8EBF8EC9L,(-5L),0L,(-5L)},{(-5L),1L,0L,0L},{0x8EBF8EC9L,0x8EBF8EC9L,(-5L),0L},{(-10L),1L,(-10L),(-5L)}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_152[i] = 65535UL;
        l_153[1][0] = (l_152[1] || 0x4CE78BFBL);
        ++g_156;
        for (g_53 = 0; (g_53 >= (-3)); --g_53)
        { 
            int32_t l_165[4][3] = {{(-1L),(-1L),(-1L)},{0xA668A642L,0x66FEBE47L,0xA668A642L},{(-1L),(-1L),(-1L)},{0xA668A642L,0x66FEBE47L,0xA668A642L}};
            int i, j;
            l_165[0][0] = ((safe_sub_func_int16_t_s_s(0xCB5DL, ((((l_152[0] > (safe_mod_func_int16_t_s_s((((l_155 ^ g_28) , 0x17F45F4FL) , g_44), g_31))) != 7UL) && g_44) <= l_165[0][0]))) != g_28);
            g_167--;
            l_165[1][0] = ((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_18, (((safe_rshift_func_int16_t_s_s(0x848FL, (safe_mod_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(l_165[0][0], l_17)) || g_30[1][2]), g_134)))) == g_113) , g_55))), 255UL)) <= l_17);
        }
    }
    return g_44;
}



static int32_t  func_2(int16_t  p_3, uint16_t  p_4)
{ 
    uint8_t l_117 = 0x61L;
    int32_t l_135 = 0x74D0E4E2L;
    int32_t l_147 = (-1L);
    int32_t l_148 = 4L;
    if (p_4)
    { 
        l_117 ^= (+(safe_rshift_func_int8_t_s_s(p_4, 0)));
        g_107 = (l_117 ^ ((l_117 && (g_7 &= p_4)) , g_30[1][0]));
        return g_113;
    }
    else
    { 
        uint32_t l_124 = 4294967294UL;
        int32_t l_132 = 0x4B411FA9L;
        int32_t l_140 = 0xAAD8A362L;
        int32_t l_141 = 0x86666F45L;
        for (g_53 = (-24); (g_53 <= (-20)); g_53++)
        { 
            int64_t l_133 = (-1L);
            int32_t l_138 = 0L;
            if ((safe_mul_func_int8_t_s_s(0x3DL, (safe_unary_minus_func_int8_t_s(0xEAL)))))
            { 
                int32_t l_123 = 0x7B113834L;
                l_124--;
                l_135 = (~(safe_mod_func_int16_t_s_s((((l_133 = (l_132 = ((safe_div_func_int8_t_s_s(l_117, p_4)) < ((((((g_30[1][2] = p_3) & p_4) , l_123) && p_4) >= 8UL) == g_46)))) <= g_134) , 0x1C41L), g_28)));
                g_46 = g_28;
            }
            else
            { 
                const uint32_t l_139 = 0x5F6D39C2L;
                l_135 &= (safe_mod_func_int32_t_s_s(((((l_138 = g_55) != l_139) != p_4) , 0x2ED6A3EEL), g_30[1][2]));
            }
        }
        g_142++;
    }
    g_28 = ((((safe_lshift_func_uint16_t_u_s(0xC91DL, l_147)) <= ((l_117 < g_28) ^ 0x632DA6A2825B7CC7LL)) >= 0xCFAEL) ^ 1UL);
    l_135 |= (0L == l_148);
    return g_46;
}



static int32_t  func_8(uint8_t  p_9, uint8_t  p_10)
{ 
    uint32_t l_23 = 4294967293UL;
    int32_t l_24 = (-4L);
    int32_t l_25 = (-8L);
    int8_t l_43 = (-10L);
    int32_t l_45 = 0x1AF53C8CL;
    int32_t l_47 = 0x5D2300B6L;
    int32_t l_52[4];
    uint32_t l_78 = 0xB3A04BB8L;
    uint32_t l_79[2][3] = {{18446744073709551613UL,18446744073709551613UL,0x95732B80L},{18446744073709551613UL,18446744073709551613UL,0x95732B80L}};
    int8_t l_96[3];
    uint64_t l_106 = 0UL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_52[i] = 0xC499E98CL;
    for (i = 0; i < 3; i++)
        l_96[i] = (-9L);
    if (((0xFAL == (l_24 = (safe_add_func_uint8_t_u_u(0xACL, (((l_23 = ((safe_rshift_func_uint8_t_u_s(p_10, p_9)) || 0L)) , g_7) ^ l_24))))) >= l_25))
    { 
        int64_t l_26 = 0xFAFBF261718BC698LL;
        int32_t l_27 = (-1L);
        int32_t l_29[4] = {0x5FAFE44FL,0x5FAFE44FL,0x5FAFE44FL,0x5FAFE44FL};
        int i;
        g_31--;
        g_28 = 1L;
        l_27 |= ((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(p_10, (safe_add_func_int8_t_s_s(g_30[1][2], 1UL)))) && p_10), l_26)) != 0xF407293CL);
    }
    else
    { 
        int32_t l_40[4][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
        int i, j;
        l_40[0][0] = (p_10 > (l_25 = g_31));
    }
    for (g_28 = 0; (g_28 != (-15)); g_28--)
    { 
        int8_t l_48[3];
        int32_t l_49 = 8L;
        int32_t l_50 = 0x01494D85L;
        int32_t l_51 = 0x4BAB92A1L;
        int32_t l_54 = 0xCA51C18CL;
        int i;
        for (i = 0; i < 3; i++)
            l_48[i] = 0xE7L;
        g_55++;
    }
    if ((l_45 ^= (g_28 != ((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((p_9 = ((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mul_func_int64_t_s_s(p_9, (((safe_rshift_func_int16_t_s_u((((-1L) || l_52[2]) && p_9), 7)) & g_7) < l_78))), g_28)), l_78)), l_47)), 4)), l_79[1][0])) >= l_25), g_30[1][0])) & 0x33B1L)) , l_24), p_10)), p_10)) , 5UL))))
    { 
        uint32_t l_95[3];
        int32_t l_97[4][1] = {{1L},{1L},{1L},{1L}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_95[i] = 0xEC372B4DL;
        l_97[3][0] |= (l_24 |= ((safe_mul_func_uint8_t_u_u((((((((safe_mul_func_int16_t_s_s((l_23 <= (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((0xF2BFCFF147090205LL ^ (safe_mul_func_int16_t_s_s((+((safe_lshift_func_uint16_t_u_s((255UL == 0x63L), 4)) || 0x8B99485C884E0B59LL)), l_95[0]))), g_30[1][2])), p_9)), l_96[0]))), p_9)) | l_52[1]) != 8L) > (-1L)) | 0x0A8980DF3AEBB8FALL) != g_30[1][0]) == g_46), p_9)) == p_9));
    }
    else
    { 
        int8_t l_108 = 0x38L;
        g_28 = (l_25 &= (safe_div_func_int64_t_s_s(g_31, (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((g_107 &= (safe_div_func_uint64_t_u_u((((l_106 = ((g_30[1][1] & 0x41L) , 0x54DF11966D8DA357LL)) < g_28) , 1UL), 0x825FA2FCAAFA3536LL))) || l_108) >= p_10), g_7)) , l_43), l_108)))));
        g_107 = (safe_sub_func_uint8_t_u_u((0xC0441A9D29CCA179LL < ((safe_mod_func_int8_t_s_s((g_30[1][2] > g_44), 0x15L)) && l_79[1][0])), l_108));
    }
    return g_46;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_30[i][j], "g_30[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
