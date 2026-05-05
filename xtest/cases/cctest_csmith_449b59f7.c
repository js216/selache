// SPDX-License-Identifier: MIT
// cctest_csmith_449b59f7.c --- cctest case csmith_449b59f7 (csmith seed 1151031799)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb65db934 */

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

// Options:   -s 1151031799 -o /tmp/csmith_gen_9cv3v8mm/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = (-3L);
static int32_t g_5 = 0x8094A188L;
static uint8_t g_19 = 0UL;
static int32_t g_20 = (-1L);
static uint32_t g_23[4][3] = {{18446744073709551615UL,0xDC99220CL,18446744073709551615UL},{0x42BBD4AAL,18446744073709551609UL,0x42BBD4AAL},{18446744073709551615UL,0xDC99220CL,18446744073709551615UL},{0x42BBD4AAL,18446744073709551609UL,0x42BBD4AAL}};
static uint64_t g_28 = 0x885B3D925D3C095BLL;
static int8_t g_32 = 1L;
static uint32_t g_33 = 0x905687C4L;
static uint64_t g_53 = 0x22A57D884BB8686BLL;
static uint16_t g_86 = 65535UL;
static uint32_t g_89 = 0x2D56AB65L;
static uint16_t g_104[4][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
static int64_t g_124 = 0x4D3EBC02147657C9LL;
static int8_t g_125 = 1L;
static uint32_t g_143[4] = {5UL,5UL,5UL,5UL};
static uint16_t g_155 = 0x7F31L;
static uint32_t g_156 = 0x91C28AAAL;
static int32_t g_159 = 0x923F436BL;
static uint64_t g_171[4][1] = {{6UL},{6UL},{6UL},{6UL}};
static uint16_t g_192 = 0x0860L;
static int64_t g_197[2][1] = {{(-5L)},{(-5L)}};



static uint8_t  func_1(void);
static uint16_t  func_13(uint8_t  p_14);
static int64_t  func_15(const uint32_t  p_16, int16_t  p_17);




static uint8_t  func_1(void)
{ 
    int32_t l_160 = 0xED7C6F00L;
    int32_t l_213[4][2];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_213[i][j] = 0x90EA19DDL;
    }
    for (g_2 = 0; (g_2 >= 1); ++g_2)
    { 
        int32_t l_157 = 0xD55B7793L;
        for (g_5 = 3; (g_5 == (-10)); --g_5)
        { 
            uint64_t l_158 = 4UL;
            int32_t l_175 = 1L;
            int32_t l_177 = (-1L);
            if ((safe_div_func_uint8_t_u_u(g_5, (safe_add_func_int8_t_s_s((l_158 |= ((~(((((func_13(((func_15(g_2, g_5) , g_2) != 0x17A9413EL)) < g_124) , l_157) <= g_124) < g_32) < g_2)) <= 0L)), g_5)))))
            { 
                uint64_t l_161 = 1UL;
                int32_t l_168[3][2];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_168[i][j] = (-9L);
                }
                l_161++;
                g_171[0][0] = (g_33 | ((safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s(l_168[0][1], (safe_add_func_uint64_t_u_u(g_156, l_157)))), g_19)) && l_158));
            }
            else
            { 
                int32_t l_176 = 0xD00A9482L;
                l_177 = (l_176 |= ((+g_159) || (((-1L) != (l_175 ^= ((((safe_rshift_func_int16_t_s_s(((l_160 = g_171[2][0]) & l_158), 13)) ^ 6L) < g_156) <= 0xBBL))) || g_124)));
                g_192 ^= ((g_32 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((g_86++) | l_176), (safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(g_53, g_19)), 7)))), l_157)), 2)), 0x193FB3AAL))) , g_156);
                g_197[1][0] &= (safe_lshift_func_uint8_t_u_s(((g_156 && 0x560471CCL) != ((safe_div_func_uint64_t_u_u(l_158, l_177)) , g_20)), l_157));
            }
        }
        for (g_159 = 0; (g_159 >= (-19)); g_159 = safe_sub_func_uint16_t_u_u(g_159, 1))
        { 
            int32_t l_202 = (-1L);
            uint8_t l_212 = 0x2EL;
            if ((((safe_mod_func_uint32_t_u_u((g_89 = (((l_202 ^ ((g_143[0] = l_202) || (safe_lshift_func_uint16_t_u_s(l_160, 10)))) > l_202) , g_197[1][0])), 0xDCFDBBA7L)) | 0x7C38L) <= 4294967291UL))
            { 
                g_5 = (l_160 & (safe_div_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint64_t_u_u(l_202, (-1L))) , 0x8952L), l_160)) | g_53) , g_156), (-1L))));
            }
            else
            { 
                uint64_t l_211 = 0x23FA78A7768BC73ALL;
                if (l_211)
                    break;
                return l_212;
            }
        }
        if (g_125)
            continue;
    }
    l_213[2][1] |= (g_5 |= ((g_192 = 65531UL) , (g_20 > l_160)));
    return g_156;
}



static uint16_t  func_13(uint8_t  p_14)
{ 
    int32_t l_25 = 0L;
    int32_t l_61 = 0x420A61B3L;
    uint32_t l_122 = 18446744073709551613UL;
    uint64_t l_126 = 18446744073709551606UL;
    uint32_t l_154 = 0x5441C1EEL;
lbl_31:
    l_25 = p_14;
    for (g_19 = 0; (g_19 <= 2); g_19 += 1)
    { 
        int32_t l_49 = (-10L);
        int32_t l_52 = 0xF100F83BL;
        int32_t l_123 = 0xA8204F9FL;
        if (g_5)
        { 
            int32_t l_26 = 8L;
            l_26 = 0x5E1BFEDAL;
            if ((!7UL))
            { 
                return g_5;
            }
            else
            { 
                g_28--;
                if (g_19)
                    goto lbl_31;
                g_33--;
            }
            for (g_20 = 0; (g_20 <= 2); g_20 += 1)
            { 
                uint8_t l_36[4];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_36[i] = 0xA9L;
                ++l_36[0];
                l_25 &= g_23[g_19][g_19];
                if (g_23[3][0])
                    break;
            }
        }
        else
        { 
            int32_t l_41 = 0xD4393632L;
            uint16_t l_48 = 0xB69EL;
            for (g_28 = 0; (g_28 <= 2); g_28 += 1)
            { 
                return g_5;
            }
            l_49 = (((l_41 = (safe_mul_func_int8_t_s_s(l_41, (safe_add_func_uint64_t_u_u((g_20 == (safe_div_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(p_14, l_25)) >= 0x8B2576953C535718LL) , p_14), g_23[0][0]))), 0L))))) ^ 0L) , l_48);
            return g_19;
        }
        g_53 = (safe_add_func_uint32_t_u_u((((l_52 < (((0x47L == l_49) & p_14) , g_5)) , g_19) , l_49), p_14));
        if ((~(l_25 = (l_49 , (-4L)))))
        { 
            uint16_t l_70[4];
            int32_t l_82 = 2L;
            int i;
            for (i = 0; i < 4; i++)
                l_70[i] = 0UL;
            if ((!(((safe_sub_func_uint32_t_u_u(4294967290UL, ((+((safe_add_func_int32_t_s_s(((l_25 = 1UL) & (0x2215ACA6L != 9UL)), l_61)) < g_23[0][2])) && 0xF0ED5C0EB74473CALL))) , 0x4084DAEA480D8AAFLL) < 0xE1EFB40ACB488663LL)))
            { 
                l_61 = l_25;
                if (l_61)
                    continue;
            }
            else
            { 
                l_70[0] = ((safe_add_func_int32_t_s_s(l_61, (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(p_14, (safe_sub_func_int64_t_s_s(0x4EE0C605F77832D1LL, 0x9D621DD8CACF6402LL)))), 6)))) , g_19);
            }
            l_82 |= (safe_div_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_sub_func_int64_t_s_s(0L, 0xAB57C19DE87A905BLL)), ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((~l_70[0]), 13)), (-1L))) , l_61))), (-1L)));
        }
        else
        { 
            uint8_t l_85[1][4] = {{255UL,255UL,255UL,255UL}};
            int32_t l_90 = 9L;
            int i, j;
            for (g_33 = 0; (g_33 <= 2); g_33 += 1)
            { 
                const int64_t l_91 = 0xC62769A4A7B59292LL;
                g_86 = ((safe_rshift_func_uint8_t_u_s(g_20, 2)) == l_85[0][1]);
                l_90 &= (((((1L ^ (((g_89 = (g_86++)) & (p_14 , (g_28 >= g_19))) == g_53)) ^ 0UL) , g_28) == l_25) != l_61);
                g_104[1][0] ^= (((l_91 , ((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((((safe_unary_minus_func_int32_t_s((((safe_unary_minus_func_uint8_t_u((((p_14 > 0xBE4639A7L) > 1UL) , p_14))) != p_14) ^ l_91))) | 6L) , 0x3B37L), p_14)) & (-1L)), 4)), l_52)), 0x2CL)), g_86)) ^ p_14)) , g_2) , g_19);
            }
        }
        for (g_86 = 0; (g_86 <= 2); g_86 += 1)
        { 
            uint32_t l_105 = 0x2D1EC869L;
            int32_t l_142 = 0L;
            int32_t l_144[4];
            int i;
            for (i = 0; i < 4; i++)
                l_144[i] = 0L;
            --l_105;
            for (g_33 = 0; (g_33 <= 2); g_33 += 1)
            { 
                uint32_t l_121 = 4294967293UL;
                int32_t l_145 = 0xD561E864L;
                l_123 = (safe_sub_func_int8_t_s_s((l_52 = (safe_mod_func_int32_t_s_s((!((((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((+(((safe_rshift_func_int16_t_s_s((g_53 , (+(((g_104[1][0] , ((g_20 , l_61) , l_52)) != g_23[3][0]) <= p_14))), l_105)) >= g_89) < g_104[1][0])) & g_20), g_53)) || g_28), g_33)) || p_14) || l_121) , p_14)), l_105))), l_122));
                l_126++;
                l_145 = (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((((((safe_sub_func_int16_t_s_s(p_14, (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((g_28 = (!((((safe_rshift_func_int16_t_s_u((l_144[0] = (g_143[0] = (((4L <= (l_142 ^= ((p_14 ^ g_104[3][1]) ^ 246UL))) , l_105) < g_32))), 2)) ^ g_28) && l_121) , l_121))), g_19)), 0xB2L)))) & l_121) , 1L) || p_14) , l_121), l_105)), 0xFEL));
            }
            for (l_142 = 2; (l_142 >= 0); l_142 -= 1)
            { 
                uint32_t l_153 = 2UL;
                g_156 = (((+(safe_mod_func_int64_t_s_s((p_14 , (((((g_155 = ((safe_sub_func_int8_t_s_s((g_125 = 8L), ((((safe_mod_func_int32_t_s_s(p_14, 0x7E66CDF1L)) >= l_144[3]) == l_153) && l_144[0]))) == l_154)) , 0x752C94BBC9C3F61BLL) != 0x8C7CDC26539BA07FLL) >= 0xDA77L) != l_123)), 18446744073709551615UL))) | p_14) , g_32);
            }
        }
    }
    return p_14;
}



static int64_t  func_15(const uint32_t  p_16, int16_t  p_17)
{ 
    int32_t l_18[1][1];
    uint32_t l_24 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_18[i][j] = 0xAB4456E3L;
    }
    for (p_17 = 0; (p_17 >= 0); p_17 -= 1)
    { 
        g_19 = g_2;
        for (g_19 = 0; (g_19 <= 0); g_19 += 1)
        { 
            int i, j;
            g_20 = l_18[p_17][p_17];
            for (g_20 = 0; (g_20 < (-9)); g_20 = safe_sub_func_uint32_t_u_u(g_20, 1))
            { 
                g_23[0][2] = g_20;
            }
            if (p_16)
                continue;
        }
    }
    return l_24;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_23[i][j], "g_23[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_104[i][j], "g_104[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_171[i][j], "g_171[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_192, "g_192", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_197[i][j], "g_197[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
