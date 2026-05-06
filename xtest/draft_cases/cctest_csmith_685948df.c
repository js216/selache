// SPDX-License-Identifier: MIT
// cctest_csmith_685948df.c --- cctest case csmith_685948df (csmith seed 1750681823)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3def7125 */

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

// Options:   -s 1750681823 -o /tmp/csmith_gen_0wd8spmr/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_3 = 0x31D83293L;
static uint8_t g_20 = 246UL;
static int16_t g_35 = (-7L);
static int64_t g_43 = 4L;
static uint64_t g_64[5] = {1UL,1UL,1UL,1UL,1UL};
static uint8_t g_85 = 255UL;
static uint32_t g_108 = 0x597F7B61L;
static uint8_t g_111 = 249UL;
static uint32_t g_112 = 4294967287UL;
static uint16_t g_143 = 0xFBA4L;
static int16_t g_144 = 0L;
static uint32_t g_147 = 1UL;
static uint32_t g_148 = 0xB7989D15L;
static int32_t g_157 = 0x837D8165L;
static int16_t g_168 = 0xDE06L;
static uint16_t g_169[5] = {65532UL,65532UL,65532UL,65532UL,65532UL};
static int8_t g_181[1] = {0x4FL};
static int32_t g_182[1] = {8L};



static uint32_t  func_1(void);
static const int32_t  func_4(int32_t  p_5, int8_t  p_6, uint16_t  p_7, uint32_t  p_8, int32_t  p_9);
static int32_t  func_10(int32_t  p_11);
static int64_t  func_14(uint8_t  p_15, int8_t  p_16);




static uint32_t  func_1(void)
{ 
    uint32_t l_2[2][2][3] = {{{1UL,5UL,5UL},{5UL,0x5CCC90A3L,0xD490C4D8L}},{{1UL,0x5CCC90A3L,1UL},{0xF394A2A4L,5UL,0xD490C4D8L}}};
    uint64_t l_46 = 0xAF769BF4A3CA5AADLL;
    int32_t l_94 = 0x5EF4C81FL;
    int32_t l_141 = (-6L);
    int8_t l_183 = 0xCFL;
    int i, j, k;
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    { 
        uint16_t l_17 = 0xACFFL;
        int32_t l_22 = (-4L);
        int16_t l_109[2][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L}};
        uint64_t l_180[1][2][2] = {{{18446744073709551612UL,18446744073709551612UL},{18446744073709551612UL,18446744073709551612UL}}};
        int32_t l_194[3][3] = {{(-4L),0x55C05866L,(-4L)},{(-4L),0x55C05866L,(-4L)},{(-4L),0x55C05866L,(-4L)}};
        int i, j, k;
        g_85 = func_4(func_10((l_22 |= (safe_rshift_func_uint8_t_u_s((func_14(l_17, (safe_sub_func_uint16_t_u_u((((g_3 < (l_17 , ((g_20 |= (l_2[0][1][0] <= l_2[0][0][2])) , g_20))) <= g_3) > 0x8B421DD2EB2FC257LL), l_17))) > g_3), 5)))), l_46, g_3, l_2[1][1][0], l_17);
        if (g_3)
        { 
            int32_t l_93 = 1L;
            uint32_t l_110 = 0x3A476D20L;
            l_94 &= (safe_lshift_func_uint16_t_u_u((~(l_2[0][1][1] <= ((safe_sub_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_u(((g_85 && g_3) >= l_2[0][0][1]), g_64[3])) >= g_43) | (-8L)), g_43)) > l_93))), g_43));
            g_111 = (((l_110 = (safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((l_22 |= ((((((safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((0xF28DL >= (!(((safe_lshift_func_uint16_t_u_u(0x1ACCL, (g_108 &= ((g_85 & l_46) || g_20)))) | l_93) , g_43))), l_93)), l_93)) <= 0x0AL) != l_93) && g_64[1]) & l_109[0][2]) <= l_94)), 0x2EL)), l_46))) , 0x8114BAACL) >= 0x31A0A766L);
        }
        else
        { 
            int16_t l_130 = 0x0EC6L;
            int32_t l_192[4][2][2] = {{{0x0E96C7B4L,0xA76CD9F9L},{0xB7E2B5AEL,0xA76CD9F9L}},{{0x0E96C7B4L,0xA76CD9F9L},{0xB7E2B5AEL,0xA76CD9F9L}},{{0x0E96C7B4L,0xA76CD9F9L},{0xB7E2B5AEL,0xA76CD9F9L}},{{0x0E96C7B4L,0xA76CD9F9L},{0xB7E2B5AEL,0xA76CD9F9L}}};
            int64_t l_193[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_193[i] = 4L;
            if (g_111)
            { 
                uint64_t l_142 = 1UL;
                uint16_t l_145 = 65532UL;
                int32_t l_146 = 0x66F32F13L;
                g_112 = g_64[2];
                g_147 = (safe_lshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((l_146 = ((safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((((+(safe_add_func_uint8_t_u_u(l_130, (l_145 ^= (safe_sub_func_uint32_t_u_u(l_22, (g_144 ^= ((g_20 >= ((g_143 = ((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint64_t_u_u(((((safe_add_func_uint64_t_u_u((g_64[3] = (l_141 , l_94)), l_17)) != 0UL) , g_64[1]) >= g_43), 3UL)) > g_85), l_141)) , l_142) > g_20), 2)) <= l_17)) > (-1L))) || 0xF410L)))))))) | l_142) && g_108), 0x44F0L)), 3)) , l_130), l_142)) > l_130), g_108)) , g_64[3])), 0x36B060C5C9CEB3ADLL)), 0x823F5DDD1E68DCC5LL)), 2));
                --g_148;
            }
            else
            { 
                int32_t l_155[1];
                uint32_t l_156[4];
                int i;
                for (i = 0; i < 1; i++)
                    l_155[i] = (-1L);
                for (i = 0; i < 4; i++)
                    l_156[i] = 5UL;
                l_22 |= ((safe_lshift_func_uint8_t_u_u((g_147 ^ l_109[0][2]), 1)) || (g_157 = (((((safe_div_func_uint32_t_u_u(((l_156[1] = (g_64[3] |= (0x75F18E88F9A2F9BCLL != l_155[0]))) || g_64[0]), l_130)) == 1UL) , 0x8A0E647C8C7C7925LL) ^ l_17) < l_94)));
                g_168 &= (g_112 && (l_141 = ((((safe_rshift_func_uint16_t_u_u(l_130, (safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s(((((g_85 = (l_155[0] = (l_22 = (g_111 |= ((safe_div_func_uint16_t_u_u((g_143 < g_143), g_112)) , 1UL))))) & l_156[2]) || g_143) == l_141), g_157)), l_94)), (-1L))))) >= 4L) <= (-1L)) == g_64[0])));
            }
            for (g_43 = 0; (g_43 <= 1); g_43 += 1)
            { 
                uint32_t l_179[2][2][5] = {{{0xAB691963L,0xAF7C67E8L,0xAB691963L,0xAF7C67E8L,0xAB691963L},{0x95D73F7EL,0x95D73F7EL,6UL,6UL,0x95D73F7EL}},{{0UL,0xAF7C67E8L,0UL,0xAF7C67E8L,0UL},{0x95D73F7EL,6UL,6UL,0x95D73F7EL,0x95D73F7EL}}};
                int i, j, k;
                g_169[1] = l_130;
                l_183 = ((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(g_143)), ((g_182[0] = (g_181[0] &= (((safe_mul_func_uint16_t_u_u(((((l_2[0][0][0] , (~((safe_unary_minus_func_int8_t_s(((65530UL | (g_112 , 0x0A65L)) <= l_179[0][0][0]))) < l_109[0][0]))) || g_148) , 1L) > g_64[3]), 0x7C0FL)) , l_180[0][0][1]) < l_22))) <= l_46))), l_109[0][2])) & l_130);
                l_194[2][1] |= (safe_mul_func_int16_t_s_s((g_20 <= (((l_193[0] = (((g_157 = (safe_sub_func_uint8_t_u_u((((l_130 > ((safe_mod_func_int64_t_s_s(((((safe_mod_func_int8_t_s_s(l_22, g_108)) || l_130) || l_179[0][1][0]) <= 0x4145B7FBL), l_192[2][1][0])) | g_181[0])) <= g_3) && 0xF2A9E709L), g_64[3]))) , 7UL) == 1L)) , l_179[0][0][0]) | 255UL)), 65535UL));
            }
        }
        for (g_108 = 0; (g_108 <= 1); g_108 += 1)
        { 
            g_182[0] = g_181[0];
            return l_22;
        }
    }
    return g_169[1];
}



static const int32_t  func_4(int32_t  p_5, int8_t  p_6, uint16_t  p_7, uint32_t  p_8, int32_t  p_9)
{ 
    uint32_t l_61 = 0x1E8EE622L;
    int32_t l_62 = (-10L);
    int32_t l_65[4][1][5] = {{{(-1L),(-2L),0x6F360822L,(-2L),(-1L)}},{{(-1L),(-2L),0x6F360822L,(-2L),(-1L)}},{{(-1L),(-2L),0x6F360822L,(-2L),(-1L)}},{{(-1L),(-2L),0x6F360822L,(-2L),(-1L)}}};
    int i, j, k;
    for (p_9 = (-16); (p_9 <= 28); ++p_9)
    { 
        int32_t l_63 = (-2L);
        int32_t l_83 = 9L;
        int32_t l_84 = 0xD8D34273L;
        if ((safe_div_func_uint64_t_u_u(g_35, (l_65[3][0][4] = (safe_lshift_func_int8_t_s_u(((!((1UL > ((g_64[3] = ((safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((l_62 ^= (safe_mul_func_uint16_t_u_u((((!l_61) , ((1UL && p_6) >= 0x7EF3AE86L)) | 0UL), 0UL))), l_63)) <= g_35), g_3)) <= 0xE3L)) , l_61)) , l_63)) < g_3), g_35))))))
        { 
            uint8_t l_73[3];
            int i;
            for (i = 0; i < 3; i++)
                l_73[i] = 0x3AL;
            if (((+((l_84 |= (safe_sub_func_int8_t_s_s((5UL ^ ((safe_rshift_func_int16_t_s_u((((((l_83 = (l_73[1] , (safe_sub_func_uint64_t_u_u(p_8, ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_s((l_62 = (safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s(0L, 0xF68CB34FF331764CLL)), p_6))), 8)))) != g_35))))) >= p_6) == g_43) > p_9) > 4294967289UL), g_64[3])) != 0x522E61FFE8B44A65LL)), 0xCBL))) != p_5)) < g_64[3]))
            { 
                return p_5;
            }
            else
            { 
                return l_65[0][0][1];
            }
        }
        else
        { 
            if (g_64[3])
                break;
            return p_7;
        }
    }
    return l_65[3][0][4];
}



static int32_t  func_10(int32_t  p_11)
{ 
    uint8_t l_30 = 0UL;
    int32_t l_36[3][3][1] = {{{0xDB9E588CL},{0xFE1602A0L},{0xDB9E588CL}},{{0xFE1602A0L},{0xDB9E588CL},{0xFE1602A0L}},{{0xDB9E588CL},{0xFE1602A0L},{0xDB9E588CL}}};
    int32_t l_44 = 0xD1AFC438L;
    int32_t l_45[3][3][4];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
                l_45[i][j][k] = (-3L);
        }
    }
    l_36[0][2][0] &= (safe_mod_func_int64_t_s_s(((+((safe_div_func_uint64_t_u_u((safe_div_func_int16_t_s_s(l_30, g_20)), ((safe_mul_func_int16_t_s_s((((g_35 ^= ((((((-1L) || ((safe_sub_func_int16_t_s_s(l_30, l_30)) & p_11)) ^ 0xC9F71D69L) | p_11) > l_30) , 0x25AA9C4AD1532D49LL)) || l_30) < 0x9C3CBAA6F4ED832CLL), p_11)) & p_11))) || g_3)) != 0x9333L), l_30));
    l_45[0][0][0] = ((safe_add_func_int8_t_s_s(g_35, p_11)) <= ((l_44 = ((l_36[0][0][0] |= ((safe_unary_minus_func_int16_t_s((-10L))) > (safe_mul_func_uint16_t_u_u((g_43 = (~(l_30 != g_35))), 0x04BBL)))) == g_3)) <= l_30));
    return l_36[2][2][0];
}



static int64_t  func_14(uint8_t  p_15, int8_t  p_16)
{ 
    uint16_t l_21 = 65535UL;
    return l_21;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_181[i], "g_181[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_182[i], "g_182[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
