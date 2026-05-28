// SPDX-License-Identifier: MIT
// cctest_csmith_131b5a86.c --- cctest case csmith_131b5a86 (csmith seed 320559750)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x89c20161 */
/* @exp_ticks 0x3b6d */

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

// Options:   -s 320559750 -o /tmp/csmith_gen_nv_2bykq/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   uint8_t  f3;
   int32_t  f4;
   uint8_t  f5;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
};

union U2 {
   uint32_t  f0;
};

union U3 {
   const uint32_t  f0;
   int32_t  f1;
   int8_t  f2;
   const uint8_t  f3;
};

union U4 {
   int16_t  f0;
   uint32_t  f1;
};

union U5 {
   uint16_t  f0;
};


static struct S0 g_18 = {0x7312B948L,0x14D2FC5C3C3AE507LL,0x4BA09A16L,0xE6L,0xB5009892L,0x57L};
static union U5 g_19 = {65535UL};
static int32_t g_68 = 0L;
static int64_t g_69 = 3L;
static uint16_t g_72 = 65527UL;
static struct S0 g_76 = {-1L,0x9507407285EBC95BLL,0UL,255UL,0xEF0591FCL,0x28L};
static union U5 g_79[2][2][5] = {{{{0xADB8L},{65529UL},{0xADB8L},{0xF0D2L},{65529UL}},{{65535UL},{0xF7D1L},{0xF0D2L},{65535UL},{0xF0D2L}}},{{{65535UL},{65535UL},{0x6DF6L},{65529UL},{0xDC05L}},{{0xADB8L},{0xDC05L},{0xF0D2L},{0xF0D2L},{0xDC05L}}}};
static union U2 g_117 = {0xECED6D97L};
static uint64_t g_120 = 0xC04404CF58845953LL;
static union U1 g_143 = {0x07FA3ACCL};



static union U1  func_1(void);
static uint16_t  func_5(int32_t  p_6, struct S0  p_7, const uint32_t  p_8);
static uint16_t  func_9(const int16_t  p_10, union U4  p_11);
static int32_t  func_13(struct S0  p_14, union U5  p_15, union U3  p_16, uint8_t  p_17);




static union U1  func_1(void)
{ 
    struct S0 l_2 = {5L,0xFA4AD744D0289A69LL,0x76881957L,0xA5L,0xB5F0B101L,0UL};
    int32_t l_12 = 0x4A71A6E4L;
    union U3 l_20 = {0x1CF717C9L};
    uint8_t l_40 = 0xFAL;
    union U4 l_41 = {0x2A44L};
    uint32_t l_75 = 0x55A6935EL;
    int32_t l_129 = 8L;
    int32_t l_135 = 0x6B18C049L;
    uint32_t l_136 = 1UL;
    union U1 l_149 = {1UL};
lbl_142:
    l_2 = (l_2 , (((safe_div_func_uint16_t_u_u(func_5((g_68 = (func_9((((l_40 = (g_18.f1 = ((l_2.f3 <= l_12) && (func_13(g_18, g_19, l_20, g_18.f4) | 0UL)))) > l_2.f1) , g_18.f5), l_41) < l_75)), g_76, g_76.f0), 0x2EBDL)) < g_76.f4) , l_2));
    if ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((l_2.f2 || ((((g_120 = (((((g_18.f4 == ((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((g_117 , (((safe_mod_func_int32_t_s_s(g_76.f1, g_76.f1)) ^ 0x0225L) < l_2.f4)) , 0x72L), 0x10L)), 0xA5L)) , 0L)) <= (-3L)) | g_18.f4) & 7UL) <= g_68)) ^ 0x47L) && g_18.f2) >= 0xACL)), g_76.f4)) <= l_20.f2), g_76.f3)))
    { 
        int8_t l_134 = 8L;
        int32_t l_137 = (-3L);
        l_2.f0 = 1L;
        l_137 = (g_76.f0 = ((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_129 = 0xF8CB8F1EL), (g_18.f0 = (safe_lshift_func_uint16_t_u_u((((g_76.f1 , g_18) , ((((safe_add_func_uint8_t_u_u((((((0xE7L > 255UL) >= l_2.f3) , l_134) <= 9L) != l_41.f0), g_18.f1)) , 0L) ^ g_18.f5) , 0xB778L)) ^ 0x67A4L), 13))))), g_76.f1)), l_135)), l_136)) , g_18.f4));
        for (g_19.f0 = 0; (g_19.f0 != 32); g_19.f0++)
        { 
            for (g_76.f1 = 0; (g_76.f1 == 3); g_76.f1 = safe_add_func_int64_t_s_s(g_76.f1, 4))
            { 
                if (l_20.f0)
                    goto lbl_142;
            }
        }
    }
    else
    { 
        uint32_t l_144 = 5UL;
        int32_t l_148 = (-4L);
        for (g_69 = 1; (g_69 >= 0); g_69 -= 1)
        { 
            struct S0 l_145 = {0xC302985BL,1UL,1UL,250UL,-2L,0x07L};
            for (l_2.f0 = 1; (l_2.f0 >= 0); l_2.f0 -= 1)
            { 
                if (g_18.f0)
                    break;
                return g_143;
            }
            if (((0xCBF7460F080F8944LL < 0x981FDBEEBB44E65DLL) == l_144))
            { 
                l_2 = l_145;
            }
            else
            { 
                uint32_t l_147 = 0xDAB8F038L;
                l_135 = g_76.f0;
                l_148 = (safe_unary_minus_func_uint16_t_u((l_147 = g_76.f5)));
            }
            for (l_20.f1 = 1; (l_20.f1 >= 0); l_20.f1 -= 1)
            { 
                return l_149;
            }
        }
    }
    return g_143;
}



static uint16_t  func_5(int32_t  p_6, struct S0  p_7, const uint32_t  p_8)
{ 
    int8_t l_95 = (-1L);
    p_7 = p_7;
    for (g_18.f0 = 1; (g_18.f0 > 19); g_18.f0 = safe_add_func_int16_t_s_s(g_18.f0, 4))
    { 
        int16_t l_88 = 0xD895L;
        int32_t l_98 = (-2L);
        for (g_18.f1 = 0; (g_18.f1 <= 1); g_18.f1 += 1)
        { 
            int8_t l_86 = 0x75L;
            int32_t l_99 = 0xAE7C4FE1L;
            uint32_t l_100 = 2UL;
            for (g_76.f5 = 0; (g_76.f5 <= 1); g_76.f5 += 1)
            { 
                int32_t l_87 = 0x3606EC16L;
                l_87 = ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(p_6, (safe_add_func_uint64_t_u_u(6UL, (-9L))))) , p_7.f0), l_86)) != 0xFAL);
                if (l_88)
                    continue;
                l_98 = ((safe_add_func_uint8_t_u_u(g_76.f1, ((g_69 ^= p_7.f2) || (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u((((~l_95) != ((((safe_div_func_int16_t_s_s(l_86, 0xEFA8L)) > 1L) | 5L) , 9L)) & g_76.f5))), g_18.f2))))) < 0x172592CBL);
            }
            l_99 = l_86;
            for (p_6 = 0; (p_6 <= 1); p_6 += 1)
            { 
                p_7.f0 = (l_100 == (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((l_99 = (-1L)), (safe_mod_func_uint8_t_u_u((0xD8D123FBL && ((l_98 = (safe_sub_func_uint32_t_u_u(((((p_7.f0 || p_7.f2) , p_6) >= l_95) ^ 2L), g_18.f3))) <= g_18.f3)), g_76.f4)))), g_19.f0)));
            }
        }
    }
    return p_7.f1;
}



static uint16_t  func_9(const int16_t  p_10, union U4  p_11)
{ 
    int8_t l_54 = 1L;
    union U2 l_57 = {18446744073709551615UL};
    int32_t l_58 = 0xA0BF3FD2L;
    int32_t l_59 = 3L;
    union U4 l_60 = {-7L};
    int32_t l_67 = 0x1872AF40L;
    int32_t l_70 = (-9L);
    int32_t l_71 = 0xB2DECA36L;
    g_18.f0 = ((g_18.f5 |= (((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u((--g_19.f0), (l_59 &= (((safe_div_func_int64_t_s_s((-3L), ((l_58 = (safe_lshift_func_uint16_t_u_u((l_54 <= ((((safe_rshift_func_uint8_t_u_u((l_57 , ((((l_54 != g_18.f3) || p_11.f0) == g_18.f1) & p_10)), 1)) != l_54) & l_57.f0) < 0x39D1L)), 3))) ^ 0UL))) & p_11.f0) != 1L)))) && 0L), 0)) ^ p_10) <= l_57.f0)) != (-8L));
    g_18.f0 = (l_60 , (safe_div_func_int32_t_s_s((((l_54 >= ((((65531UL <= ((safe_sub_func_int16_t_s_s(((l_60.f0 ^ g_18.f4) < 0x5E135737L), l_60.f0)) | l_57.f0)) < g_18.f0) == 0x1001L) > g_18.f0)) | g_18.f2) , 0x40AC15C2L), (-2L))));
    g_72--;
    return g_18.f3;
}



static int32_t  func_13(struct S0  p_14, union U5  p_15, union U3  p_16, uint8_t  p_17)
{ 
    uint32_t l_37[3];
    int32_t l_39 = (-9L);
    int i;
    for (i = 0; i < 3; i++)
        l_37[i] = 0x7DE97EE8L;
    for (g_18.f0 = (-22); (g_18.f0 < (-10)); g_18.f0++)
    { 
        uint16_t l_30 = 0xF2D8L;
        union U4 l_36[2][2] = {{{0L},{0L}},{{0L},{0L}}};
        int32_t l_38 = 0L;
        int i, j;
        l_39 = ((g_18.f3--) != (safe_mul_func_int8_t_s_s(((((!((safe_mod_func_uint64_t_u_u(l_30, (l_37[0] = (safe_rshift_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(0x7771FDA6603FA8B7LL, l_30)) < ((+(l_36[0][0] , g_18.f0)) != 0xDBC1552CL)), l_30))))) & g_18.f4)) != l_30) & l_38) && l_37[0]), l_30)));
        return g_18.f2;
    }
    p_14.f0 ^= 0L;
    p_14.f0 = l_37[2];
    return g_18.f3;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_18.f4, "g_18.f4", print_hash_value);
    transparent_crc(g_18.f5, "g_18.f5", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2, "g_76.f2", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    transparent_crc(g_76.f4, "g_76.f4", print_hash_value);
    transparent_crc(g_76.f5, "g_76.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_79[i][j][k].f0, "g_79[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
