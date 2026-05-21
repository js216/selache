// SPDX-License-Identifier: MIT
// cctest_csmith_1b813a48.c --- cctest case csmith_1b813a48 (csmith seed 461453896)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5a63665 */

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

// Options:   -s 461453896 -o /tmp/csmith_gen_o3110odl/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   int64_t  f1;
   int32_t  f2;
   const uint32_t  f3;
   int8_t  f4;
};

union U1 {
   int32_t  f0;
   uint32_t  f1;
};


static int16_t g_20 = (-1L);
static uint64_t g_22 = 0x07C70AB227D373EELL;
static int32_t g_51[3] = {0xF29C214FL,0xF29C214FL,0xF29C214FL};
static int8_t g_85 = 0x34L;
static uint32_t g_88 = 0xF35A7B36L;
static int16_t g_91 = 0L;
static uint64_t g_93 = 0xF1F153C6A96B5814LL;
static uint64_t *g_92 = &g_93;
static uint64_t *g_100 = (void*)0;
static const int16_t g_106 = 1L;
static int16_t g_110 = 0x1114L;
static int32_t *g_125 = &g_51[1];
static int16_t g_128 = 7L;
static uint16_t g_130 = 0x45A3L;
static struct S0 g_142 = {2UL,0xEF20378A6B184C14LL,0x3A41A2CEL,0xF336F0E2L,1L};
static uint8_t g_146 = 9UL;
static uint16_t g_174[2] = {65530UL,65530UL};
static uint64_t g_209 = 0x4FB15D496808D468LL;
static uint16_t g_226 = 0xE955L;
static int16_t *g_229 = &g_91;
static int16_t **g_228 = &g_229;
static int16_t **g_230 = &g_229;
static uint64_t g_234 = 18446744073709551615UL;
static uint64_t * const *g_239 = &g_92;
static uint64_t * const * const *g_238[4] = {&g_239,&g_239,&g_239,&g_239};
static uint64_t * const **g_249 = &g_239;
static uint64_t * const ***g_248[6] = {&g_249,&g_249,&g_249,&g_249,&g_249,&g_249};
static int16_t g_269 = (-7L);
static int8_t g_293[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t *g_341 = &g_88;
static int8_t g_343 = 0xFAL;
static const struct S0 g_370 = {4294967295UL,0x155C61110A9B9D1ELL,0x9EBAA961L,0xF24B6C45L,0L};
static const struct S0 *g_369 = &g_370;
static const struct S0 g_372 = {0xCA5FBACFL,0xE2E06FD1D9D8BA12LL,0x00EA1A5FL,0UL,0L};
static uint8_t g_430 = 248UL;
static struct S0 g_465 = {0x2CB63465L,0L,0L,0xA78EF364L,0x87L};
static int32_t *g_469 = &g_51[2];
static union U1 g_471 = {-8L};
static union U1 **g_475 = (void*)0;
static uint8_t g_492 = 0x72L;
static int32_t g_495 = 0xF1BFB36FL;
static uint8_t *g_504 = (void*)0;
static uint8_t **g_503 = &g_504;



static int8_t  func_1(void);
static int32_t  func_2(int16_t  p_3, int8_t  p_4, uint64_t  p_5);
static int16_t  func_12(uint32_t  p_13, uint8_t  p_14, uint32_t  p_15);
static int8_t  func_16(uint64_t  p_17, uint16_t  p_18, union U1  p_19);
static uint32_t  func_28(uint64_t * p_29, int64_t  p_30, uint64_t * p_31, int32_t  p_32, uint64_t * p_33);
static uint64_t * func_34(int64_t  p_35, uint64_t  p_36, const uint32_t  p_37, const int16_t  p_38, uint64_t * const  p_39);
static int64_t  func_40(int16_t  p_41, uint32_t  p_42, int32_t  p_43, uint64_t * p_44, uint64_t * p_45);
static uint32_t  func_47(uint64_t * p_48, uint64_t * p_49);




static int8_t  func_1(void)
{ 
    int32_t l_6 = 1L;
    uint64_t *l_21[3][6] = {{&g_22,&g_22,(void*)0,(void*)0,&g_22,&g_22},{(void*)0,&g_22,(void*)0,&g_22,(void*)0,(void*)0},{&g_22,&g_22,&g_22,&g_22,&g_22,&g_22}};
    union U1 l_23[1] = {{-7L}};
    int8_t *l_489 = (void*)0;
    int8_t *l_490 = &g_465.f4;
    int32_t *l_509 = &l_6;
    uint64_t l_510[2][7] = {{5UL,0x5D23F2215A22E776LL,5UL,5UL,0x5D23F2215A22E776LL,5UL,5UL},{5UL,5UL,0x5D23F2215A22E776LL,5UL,5UL,0x5D23F2215A22E776LL,5UL}};
    int i, j;
    (*l_509) = func_2(l_6, (safe_add_func_uint16_t_u_u(((g_492 ^= (safe_unary_minus_func_int8_t_s((((*g_229) = func_12(((func_16((g_22 = (l_6 & g_20)), l_6, l_23[0]) >= ((*l_490) = (safe_mod_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(0UL, 0x13073420L)), 18446744073709551607UL)))) != 255UL), l_6, g_293[1])) >= 0L)))) == 0x4DL), l_23[0].f0)), l_6);
    return l_510[0][5];
}



static int32_t  func_2(int16_t  p_3, int8_t  p_4, uint64_t  p_5)
{ 
    int32_t *l_493[6][5] = {{&g_51[2],(void*)0,&g_51[2],(void*)0,&g_51[2]},{&g_51[2],&g_51[2],&g_51[2],&g_51[2],&g_51[2]},{&g_51[2],(void*)0,&g_51[2],(void*)0,&g_51[2]},{&g_51[2],&g_51[2],&g_51[2],&g_51[2],&g_51[2]},{&g_51[2],(void*)0,&g_51[2],(void*)0,&g_51[2]},{&g_51[2],&g_51[2],&g_51[2],&g_51[2],&g_51[2]}};
    int8_t l_494[2][5] = {{0L,0L,0L,0L,0L},{0xB4L,0xB4L,0xB4L,0xB4L,0xB4L}};
    uint8_t l_496 = 255UL;
    int32_t l_499[2];
    uint16_t l_500 = 0x60BFL;
    uint8_t ***l_505 = &g_503;
    uint64_t l_506 = 0UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_499[i] = 0x7F682C8EL;
    --l_496;
    l_500++;
    (*l_505) = g_503;
    --l_506;
    return p_4;
}



static int16_t  func_12(uint32_t  p_13, uint8_t  p_14, uint32_t  p_15)
{ 
    uint64_t l_491 = 0x0AC6929953DAB9E8LL;
    return l_491;
}



static int8_t  func_16(uint64_t  p_17, uint16_t  p_18, union U1  p_19)
{ 
    int8_t *l_82 = (void*)0;
    int8_t *l_83 = (void*)0;
    int8_t *l_84 = &g_85;
    uint32_t *l_86 = (void*)0;
    uint32_t *l_87 = &g_88;
    int32_t l_89 = 1L;
    int16_t *l_90 = &g_91;
    uint64_t *l_94 = &g_93;
    uint64_t *l_462 = (void*)0;
    struct S0 *l_464 = &g_465;
    if ((safe_rshift_func_int16_t_s_u((1L == (g_20 < func_28(func_34(func_40(((*l_90) ^= (+((((func_47(&p_17, &g_22) & ((((((*l_87) &= (safe_add_func_int64_t_s_s((((safe_mod_func_int8_t_s_s(((*l_84) = (p_17 == g_20)), p_18)) , p_17) && 0x93E3F5A7L), 0xA8E544929873052DLL))) | p_19.f0) || g_20) , l_89) || l_89)) != l_89) & l_89) , 7UL))), p_18, g_20, g_92, l_94), p_18, g_370.f2, p_19.f1, l_94), p_17, l_462, l_89, l_94))), 12)))
    { 
        int32_t *l_466 = (void*)0;
        int32_t **l_467 = &g_125;
        int32_t **l_468[7];
        union U1 * const l_470 = &g_471;
        union U1 *l_473 = &g_471;
        union U1 **l_472 = &l_473;
        int i;
        for (i = 0; i < 7; i++)
            l_468[i] = &l_466;
        l_464 = (void*)0;
        g_469 = ((*l_467) = l_466);
        (*l_472) = l_470;
    }
    else
    { 
        int32_t **l_474[6] = {&g_469,&g_125,&g_469,&g_469,&g_125,&g_469};
        int64_t l_484 = 0L;
        int i;
        g_469 = &g_51[2];
        p_19.f0 = ((((g_475 = (void*)0) != (void*)0) < ((safe_add_func_int8_t_s_s(0xFBL, g_234)) , (-3L))) <= ((safe_mod_func_int32_t_s_s(((((((((((p_18 != (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(3UL, (-1L))), g_465.f1))) == (*g_469)) || p_19.f1) ^ g_226) ^ l_484) ^ 255UL) ^ p_19.f0) >= p_17) < p_18) , (*g_469)), p_18)) , p_17));
    }
    return g_370.f1;
}



static uint32_t  func_28(uint64_t * p_29, int64_t  p_30, uint64_t * p_31, int32_t  p_32, uint64_t * p_33)
{ 
    int16_t l_463 = (-1L);
    return l_463;
}



static uint64_t * func_34(int64_t  p_35, uint64_t  p_36, const uint32_t  p_37, const int16_t  p_38, uint64_t * const  p_39)
{ 
    int32_t l_407 = 0x83328BE9L;
    const int32_t **l_427 = (void*)0;
    int16_t l_428[1];
    int32_t l_454[7];
    int i;
    for (i = 0; i < 1; i++)
        l_428[i] = 0x8EF6L;
    for (i = 0; i < 7; i++)
        l_454[i] = 0x5A642409L;
    for (g_226 = 10; (g_226 != 34); g_226 = safe_add_func_int16_t_s_s(g_226, 8))
    { 
        uint32_t l_431 = 0UL;
        int32_t l_434 = 1L;
        int32_t *l_453[5][6] = {{&g_51[2],&l_407,&g_51[2],&g_51[2],&l_407,&g_51[2]},{&g_51[2],&l_407,&g_51[2],&g_51[2],&l_407,&g_51[2]},{&g_51[2],&l_407,&g_51[2],&g_51[2],&l_407,&g_51[2]},{&g_51[2],&l_407,&g_51[2],&g_51[2],&l_407,&g_51[2]},{&g_51[2],&l_407,&g_51[2],&g_51[2],&l_407,&g_51[2]}};
        uint32_t l_455 = 18446744073709551611UL;
        union U1 l_458 = {5L};
        int i, j;
        for (g_128 = 0; (g_128 == 16); g_128++)
        { 
            uint8_t *l_408 = &g_146;
            int32_t l_413[4] = {(-3L),(-3L),(-3L),(-3L)};
            int32_t **l_426 = &g_125;
            uint8_t *l_429[3][4][5] = {{{&g_430,&g_430,(void*)0,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,(void*)0,&g_430,&g_430}},{{&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,(void*)0,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430}},{{&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,(void*)0,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430}}};
            uint16_t *l_432 = (void*)0;
            uint16_t *l_433 = (void*)0;
            uint64_t **l_451 = &g_92;
            uint64_t *** const l_450 = &l_451;
            int i, j, k;
            if ((((safe_mod_func_int8_t_s_s(((1UL != g_91) || (l_434 = (!(((((safe_add_func_uint8_t_u_u(g_209, ((*l_408)++))) , (((safe_mul_func_uint8_t_u_u(((l_413[1] | (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0UL, (g_430 |= (((*l_408)--) , (safe_lshift_func_int8_t_s_s(((((**l_426) = (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((l_426 == l_427) && 9L), g_142.f2)), 0x713DL))) == l_428[0]) >= 0x168778ADEA07B0FCLL), 6)))))), p_36))) && 18446744073709551608UL), 3UL)) == 1UL) , p_38)) ^ p_38) && (*p_39)) || l_431)))), l_431)) , 0x67C49E4FL) & g_372.f4))
            { 
                int32_t l_435 = 0xEEF6E4C0L;
                uint64_t **l_448 = &g_92;
                uint64_t ***l_447 = &l_448;
                uint64_t ****l_449 = &l_447;
                int32_t l_452[1][7][5] = {{{0xA98B1508L,0xA934FB1EL,(-1L),6L,(-1L)},{(-1L),(-1L),0L,1L,(-3L)},{0xA934FB1EL,0xA98B1508L,0xA98B1508L,0xA934FB1EL,(-1L)},{0xB1EE37CEL,1L,(-1L),(-1L),1L},{(-1L),0xA98B1508L,(-7L),0xFFDE29D6L,0xFFDE29D6L},{2L,(-1L),2L,(-1L),0L},{6L,0xA934FB1EL,0xFFDE29D6L,0xA934FB1EL,6L}}};
                int i, j, k;
                l_452[0][6][3] |= (l_435 | ((safe_rshift_func_int16_t_s_u(l_431, 4)) & ((safe_rshift_func_uint16_t_u_u(g_372.f1, (((((safe_sub_func_int64_t_s_s((255UL < g_370.f3), (safe_add_func_uint16_t_u_u(0x0F8BL, (safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s((((*l_449) = l_447) != l_450))) | g_343) && 1UL), 1UL)))))) && p_35) , p_36) != 0xA86EL) & g_372.f0))) , (**l_426))));
                (*l_426) = &l_407;
                return &g_209;
            }
            else
            { 
                return &g_209;
            }
        }
        l_455++;
        (*g_125) ^= 2L;
        (*g_125) = (l_458 , (*g_125));
    }
    (*g_125) = l_407;
    for (g_91 = 0; (g_91 == 5); g_91 = safe_add_func_uint64_t_u_u(g_91, 1))
    { 
        uint16_t *l_461[6][1];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_461[i][j] = &g_174[0];
        }
        (*g_125) = (l_461[1][0] == (void*)0);
    }
    return &g_209;
}



static int64_t  func_40(int16_t  p_41, uint32_t  p_42, int32_t  p_43, uint64_t * p_44, uint64_t * p_45)
{ 
    uint64_t *l_99 = &g_93;
    uint64_t **l_101 = &g_92;
    const int16_t **l_103 = (void*)0;
    const int16_t *l_105 = &g_106;
    const int16_t **l_104 = &l_105;
    int16_t *l_107 = &g_20;
    int32_t l_108 = 0xD32FAA63L;
    int32_t *l_109[2][1];
    int32_t **l_120 = &l_109[1][0];
    int32_t *l_122 = (void*)0;
    int32_t **l_121 = &l_122;
    int32_t *l_124 = &g_51[2];
    int32_t **l_123[4][2] = {{&l_124,&l_124},{&l_124,&l_124},{&l_124,&l_124},{&l_124,&l_124}};
    int32_t l_129 = (-10L);
    uint32_t *l_140[2][6][1] = {{{&g_88},{&g_88},{&g_88},{&g_88},{&g_88},{&g_88}},{{&g_88},{&g_88},{&g_88},{&g_88},{&g_88},{&g_88}}};
    uint8_t *l_247[2];
    uint8_t **l_246 = &l_247[0];
    uint64_t ***l_275 = (void*)0;
    uint64_t ****l_274 = &l_275;
    uint64_t *****l_273[6] = {&l_274,&l_274,&l_274,&l_274,&l_274,&l_274};
    uint64_t *****l_276[4][4] = {{&l_274,&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274,&l_274},{&l_274,&l_274,&l_274,&l_274}};
    uint32_t l_342 = 3UL;
    const struct S0 *l_371 = &g_372;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_109[i][j] = &g_51[2];
    }
    for (i = 0; i < 2; i++)
        l_247[i] = &g_146;
    g_110 = (safe_add_func_int64_t_s_s(((((-10L) && (safe_sub_func_int16_t_s_s((((((l_99 == ((*l_101) = g_100)) | (!((((*l_104) = &p_41) == (l_107 = l_107)) , ((((void*)0 != p_44) <= 0x77E7L) , p_42)))) < l_108) , p_42) != g_85), p_41))) & l_108) , 0x91CAF8AA5B394F6CLL), 0xECD75B2834994D0ELL));
lbl_185:
    g_130 &= ((safe_lshift_func_uint16_t_u_u((g_85 , 0x7960L), 11)) == (safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((((((*l_120) = &g_51[1]) != (g_125 = ((*l_121) = &g_51[2]))) < g_22) | (safe_add_func_uint8_t_u_u(((g_128 = (p_41 < ((void*)0 != &g_93))) , 6UL), p_41))), p_41)), (*l_124))), 1)) , l_129))));
    for (g_130 = 0; (g_130 != 44); ++g_130)
    { 
        uint8_t l_153 = 0x96L;
        int32_t l_169 = 0x69DEFF53L;
        for (l_108 = 25; (l_108 <= 22); l_108 = safe_sub_func_int16_t_s_s(l_108, 9))
        { 
            int64_t l_154 = 0L;
            int32_t l_156 = (-4L);
            uint8_t l_186 = 0x0DL;
            uint32_t l_223 = 0x6EC6A9ADL;
            if (p_43)
            { 
                uint32_t **l_137 = (void*)0;
                uint32_t *l_139 = (void*)0;
                uint32_t **l_138[6][1][1];
                uint32_t *l_141 = &g_88;
                uint8_t *l_145 = &g_146;
                int32_t l_155 = 0x8D736B76L;
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_138[i][j][k] = &l_139;
                    }
                }
                l_156 |= (safe_rshift_func_uint8_t_u_u(((l_140[1][4][0] = &p_42) == ((((1UL & ((l_141 = &p_42) != (void*)0)) > ((g_142 , g_51[1]) != ((safe_div_func_uint32_t_u_u((((*l_145)++) ^ (safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((((*p_44) = ((*p_44) , l_153)) , g_91) | l_154), g_142.f4)), g_85))), (*g_125))) >= l_155))) != p_42) , (void*)0)), l_155));
                if ((**l_120))
                    break;
                (*l_121) = &g_51[0];
                for (g_146 = 4; (g_146 <= 42); g_146++)
                { 
                    uint8_t *l_170 = &g_146;
                    uint8_t **l_171 = &l_145;
                    int32_t l_172 = 0x7BE4936EL;
                    uint16_t *l_173 = &g_174[0];
                    int8_t *l_183 = (void*)0;
                    int8_t *l_184[7] = {&g_142.f4,&g_142.f4,&g_142.f4,&g_142.f4,&g_142.f4,&g_142.f4,&g_142.f4};
                    int i;
                    if (p_41)
                        break;
                    l_156 = ((safe_rshift_func_uint16_t_u_u((+((*l_173) |= (safe_rshift_func_uint8_t_u_u(((+p_43) <= (((((*g_125) = (safe_lshift_func_uint8_t_u_s((g_142.f3 ^ (l_169 ^= (--(*l_141)))), 0))) < ((((*l_171) = l_170) == ((l_155 = (((g_125 != g_125) | g_142.f2) | (l_172 == g_142.f2))) , &g_146)) | g_128)) != g_88) > 0xCC87407BL)), 3)))), p_41)) & (*p_44));
                    (*l_124) = (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(0x8D7DL, g_106)) && 0xF116L), ((l_155 = (l_169 = (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((g_130 < p_43), g_174[0])), (0xF5E1L | (-1L)))))) || g_142.f4)));
                }
            }
            else
            { 
                if (l_108)
                    goto lbl_185;
                l_186++;
                return g_142.f4;
            }
            for (g_22 = 0; (g_22 != 15); ++g_22)
            { 
                const uint8_t l_205 = 2UL;
                uint64_t *l_208 = &g_209;
                if ((safe_add_func_uint64_t_u_u((*p_44), ((*l_208) |= (((safe_lshift_func_int8_t_s_s(1L, ((p_42 = (((safe_sub_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(((l_205 != ((l_153 >= g_20) , ((l_169 == (safe_mod_func_int64_t_s_s((p_41 > 0x965AL), (*p_44)))) <= l_169))) != 0L), 0x22L)) > g_142.f2), (-8L))) > p_42), (*p_44))), 0x87L)) , (void*)0) != &g_22)) > g_174[0]))) >= (*p_44)) >= g_146)))))
                { 
                    int8_t *l_212 = &g_142.f4;
                    const uint8_t *l_221 = &l_205;
                    const uint8_t **l_220 = &l_221;
                    uint16_t *l_224 = &g_174[0];
                    uint16_t *l_225 = &g_226;
                    int16_t ***l_227 = (void*)0;
                    (*l_122) = ((((g_230 = (g_228 = ((safe_add_func_uint16_t_u_u(8UL, ((*l_225) ^= ((*l_224) = ((((((*l_212) &= (-2L)) >= (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(0xCBE35802L, (((safe_mul_func_uint8_t_u_u(((l_212 == ((*l_220) = &l_205)) > 65533UL), (((((+((void*)0 != &g_51[0])) , 0x85L) ^ g_174[0]) , g_209) < 0x2CL))) ^ p_41) <= p_42))) >= 4294967295UL), l_223)) , 0x3EL)))) < g_93) , (void*)0) != (void*)0))))) , (void*)0))) == (void*)0) && 0x54L) < (**l_120));
                }
                else
                { 
                    uint64_t l_231 = 0x8EEE2E214262232ELL;
                    ++l_231;
                }
            }
            if (p_41)
                continue;
            return p_43;
        }
    }
    if ((g_234 ^= (*g_125)))
    { 
        uint64_t * const *l_236 = &l_99;
        uint64_t * const * const *l_235[2][6][1] = {{{&l_236},{(void*)0},{&l_236},{(void*)0},{&l_236},{(void*)0}},{{&l_236},{(void*)0},{&l_236},{(void*)0},{&l_236},{(void*)0}}};
        uint64_t * const * const **l_237 = (void*)0;
        uint64_t * const ****l_250 = &g_248[5];
        const int32_t l_268 = 0x45D199DAL;
        int i, j, k;
        g_238[2] = l_235[1][4][0];
        g_269 = (safe_add_func_uint8_t_u_u(((**l_246) = ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((((void*)0 == l_246) ^ (((*l_250) = g_248[0]) == (void*)0)), 4)), ((*g_125) = ((void*)0 == &l_101)))) & (((safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((((safe_add_func_int16_t_s_s((+((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(g_226, g_85)), l_268)), p_41)) , 0x37L), 0xB6L)), 7)) >= p_43)), p_43)) == p_41) & 0xFC9DL), g_142.f4)), 6)) || p_41) >= (-1L)))), 6L));
    }
    else
    { 
        int8_t *l_282[2];
        int32_t l_283 = (-1L);
        int32_t l_284[2][4][1] = {{{1L},{(-4L)},{1L},{(-4L)}},{{1L},{(-4L)},{1L},{(-4L)}}};
        int32_t *l_296 = &l_284[1][0][0];
        int32_t l_314 = 0x5770AF4FL;
        uint32_t l_315 = 0x48BBD532L;
        struct S0 l_339 = {0x8E31144BL,-1L,0xCC574BBDL,0xA2EC3706L,0x6DL};
        const struct S0 *l_373 = (void*)0;
        uint8_t l_392[7];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_282[i] = &g_85;
        for (i = 0; i < 7; i++)
            l_392[i] = 0xFBL;
        l_284[1][0][0] &= ((l_283 &= (safe_unary_minus_func_int64_t_s((((p_41 = ((((safe_lshift_func_int8_t_s_u((&g_146 == ((*l_246) = (void*)0)), (l_273[0] == (l_276[2][3] = &l_274)))) , ((**l_121) = (safe_add_func_int8_t_s_s(((((*l_122) && (!p_42)) < (safe_mod_func_int32_t_s_s(1L, p_43))) <= 4L), 255UL)))) && p_41) & g_142.f1)) != 65535UL) , (**l_120))))) | g_142.f2);
lbl_397:
        (**l_120) = (((0x46L >= 0xC1L) , ((((safe_add_func_uint16_t_u_u((p_43 <= (((((safe_rshift_func_uint16_t_u_s(g_88, ((4UL == 7UL) >= (((safe_lshift_func_uint16_t_u_u((((safe_div_func_int8_t_s_s(g_174[1], 9L)) ^ (*p_45)) , g_293[1]), 7)) && 0x6D4DFEEED56E27D1LL) | (-1L))))) ^ l_284[1][2][0]) <= (*p_44)) || 0x0765L) , p_42)), p_43)) > g_51[2]) < 0xAF29779F3C657A09LL) < 0x4692L)) , 0x0AF4106DL);
        for (g_85 = 0; (g_85 == 10); g_85 = safe_add_func_uint64_t_u_u(g_85, 1))
        { 
            uint8_t l_312 = 1UL;
            int32_t l_338 = (-8L);
            int32_t l_350 = 0x1A32C9F2L;
            int32_t l_352 = (-5L);
            int8_t l_354 = 0xD3L;
            int32_t l_355 = 1L;
            int32_t l_356 = 0xF9694329L;
            int32_t l_358 = 0x81E52A8FL;
            int16_t l_359 = 0x56C0L;
            int32_t l_360[7];
            int8_t l_361 = 0x7EL;
            uint64_t l_362[4][1][3];
            const struct S0 *l_367 = (void*)0;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_360[i] = 0xAA1B3EB4L;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_362[i][j][k] = 1UL;
                }
            }
            l_296 = l_296;
            for (g_128 = 4; (g_128 == (-23)); g_128--)
            { 
                int32_t l_311 = 0L;
                uint16_t *l_313 = &g_174[0];
                int32_t l_322[4] = {0xA408D92DL,0xA408D92DL,0xA408D92DL,0xA408D92DL};
                int32_t l_344[1];
                int16_t l_357 = 0xBCFAL;
                int i;
                for (i = 0; i < 1; i++)
                    l_344[i] = (-1L);
                (*g_125) = ((safe_sub_func_uint64_t_u_u(6UL, (safe_div_func_int64_t_s_s((((((((safe_add_func_uint8_t_u_u(g_51[2], ((((safe_mul_func_uint16_t_u_u((g_142.f4 , (g_142 , ((*l_313) &= ((*l_122) <= (safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((*p_45) || (l_311 , g_106)), (**l_120))) , l_312), 1)))))), l_314)) && l_311) ^ 0L) <= l_315))) < 0xFD4621DE0E8798E1LL) || 0x06L) == p_43) & p_41) && (*l_296)) | (*g_229)), 1UL)))) > p_43);
                if (((safe_mul_func_int8_t_s_s((-1L), (l_322[2] = (safe_mod_func_int8_t_s_s(((*l_296) && (safe_mod_func_int8_t_s_s(g_93, l_312))), g_293[2]))))) | ((*g_229) = (((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(((*l_313) = (*l_122)), 5)) < (safe_rshift_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u(g_22, 2)) | p_41) ^ p_42) | p_43), 6))), p_42)) , (-9L)) == p_41))))
                { 
                    (*l_296) &= ((safe_mul_func_uint8_t_u_u((&p_41 != &p_41), g_142.f2)) == ((((!(safe_mod_func_uint32_t_u_u((l_338 = (p_42++)), ((*l_122) ^= p_43)))) > (0xAFL & (l_339 , ((~(((g_341 = l_296) == (void*)0) & 0x024CB0C6D8FC74D1LL)) | g_142.f4)))) == l_342) && (*l_124)));
                }
                else
                { 
                    uint8_t l_345[2];
                    int32_t l_348 = 0x268C0C08L;
                    int32_t l_349 = 0L;
                    int32_t l_351 = 1L;
                    int32_t l_353[3][2][5] = {{{0x158814E8L,6L,6L,0x158814E8L,0L},{0x158814E8L,0x1B171C3BL,4L,4L,0x1B171C3BL}},{{0L,6L,4L,0xE61F3302L,0xE61F3302L},{6L,0L,6L,4L,0xE61F3302L}},{{0x1B171C3BL,0x158814E8L,0xE61F3302L,0x158814E8L,0x1B171C3BL},{6L,0x158814E8L,0L,0x1B171C3BL,0L}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_345[i] = 0UL;
                    if (p_43)
                        break;
                    if ((**l_120))
                        break;
                    --l_345[1];
                    l_362[1][0][0]++;
                }
                (*g_125) = (*g_125);
            }
            for (l_339.f4 = (-23); (l_339.f4 == 0); l_339.f4++)
            { 
                struct S0 l_378 = {0UL,0L,0x38E9F50FL,18446744073709551611UL,0x10L};
                int32_t l_395 = 3L;
                int32_t l_396 = 0x99C5781CL;
                for (l_350 = 0; (l_350 <= 2); l_350 += 1)
                { 
                    const struct S0 **l_368[7][7][2] = {{{&l_367,&l_367},{&l_367,(void*)0},{(void*)0,(void*)0},{&l_367,&l_367},{&l_367,(void*)0},{(void*)0,&l_367},{&l_367,(void*)0}},{{&l_367,&l_367},{&l_367,(void*)0},{&l_367,&l_367},{(void*)0,(void*)0},{&l_367,&l_367},{&l_367,(void*)0},{(void*)0,(void*)0}},{{&l_367,&l_367},{&l_367,(void*)0},{(void*)0,&l_367},{&l_367,(void*)0},{&l_367,&l_367},{&l_367,(void*)0},{&l_367,&l_367}},{{(void*)0,(void*)0},{&l_367,&l_367},{&l_367,(void*)0},{(void*)0,(void*)0},{&l_367,&l_367},{&l_367,(void*)0},{(void*)0,&l_367}},{{&l_367,(void*)0},{&l_367,&l_367},{&l_367,(void*)0},{&l_367,&l_367},{(void*)0,(void*)0},{&l_367,&l_367},{&l_367,(void*)0}},{{(void*)0,(void*)0},{&l_367,&l_367},{&l_367,(void*)0},{(void*)0,&l_367},{&l_367,(void*)0},{&l_367,&l_367},{&l_367,(void*)0}},{{&l_367,&l_367},{(void*)0,(void*)0},{&l_367,&l_367},{&l_367,(void*)0},{(void*)0,(void*)0},{&l_367,&l_367},{&l_367,&l_367}}};
                    int64_t *l_381 = &l_339.f1;
                    int32_t l_391 = 0x62C4057CL;
                    int i, j, k;
                    l_373 = (l_371 = (g_369 = l_367));
                    g_51[l_350] = (safe_mod_func_int64_t_s_s(((((*g_229) = (safe_rshift_func_uint16_t_u_u((l_378 , ((p_41 > (safe_add_func_int64_t_s_s(((*l_381) ^= g_370.f1), ((((safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u((**l_120), (((safe_rshift_func_int16_t_s_u((((((-10L) > (*l_296)) , ((safe_unary_minus_func_uint64_t_u(((safe_mul_func_int8_t_s_s(g_146, g_20)) > (*p_45)))) >= (*p_45))) <= l_391) || 0x2CL), 12)) , l_391) & 0x40FFL))), 65535UL)) >= 18446744073709551615UL) && 0xAB4DA3A7C934FE4DLL) && g_372.f0)))) , l_391)), 6))) != p_43) ^ 0L), (*p_44)));
                    if (l_392[5])
                        continue;
                    l_396 |= ((*l_296) ^= (safe_sub_func_uint64_t_u_u((l_395 = (*l_122)), (&g_125 != (void*)0))));
                    if (p_41)
                        goto lbl_397;
                }
            }
        }
        (*l_296) = (&l_296 != (void*)0);
    }
    return p_41;
}



static uint32_t  func_47(uint64_t * p_48, uint64_t * p_49)
{ 
    int32_t *l_50 = &g_51[2];
    int32_t *l_52 = &g_51[2];
    int32_t *l_53 = &g_51[2];
    int32_t *l_54 = &g_51[0];
    int32_t l_55 = 0xA781B5F7L;
    int32_t *l_56[5];
    int64_t l_57 = 0x739C36DE1F29A3A7LL;
    int32_t l_58 = 0x90DD0679L;
    uint64_t l_59[1];
    int8_t l_62 = 1L;
    struct S0 l_73[1][1][5] = {{{{0x9099BCB1L,1L,0L,0x432CFE06L,0x79L},{0x9099BCB1L,1L,0L,0x432CFE06L,0x79L},{0x9099BCB1L,1L,0L,0x432CFE06L,0x79L},{0x9099BCB1L,1L,0L,0x432CFE06L,0x79L},{0x9099BCB1L,1L,0L,0x432CFE06L,0x79L}}}};
    int64_t *l_76 = (void*)0;
    int64_t *l_77 = &l_57;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_56[i] = &l_55;
    for (i = 0; i < 1; i++)
        l_59[i] = 3UL;
    ++l_59[0];
    (*l_53) = l_62;
    (*l_50) = ((((safe_sub_func_int64_t_s_s(((*l_77) &= (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((18446744073709551607UL ^ ((*p_49) ^= (l_73[0][0][3] , g_20))), (((&l_55 != &l_55) > (*l_50)) ^ (safe_add_func_uint8_t_u_u(((((void*)0 == &l_55) || (*p_48)) < (*l_52)), (*l_52)))))), 5)), 0xF51BCBD03F0CD8B2LL)), g_20))), (*l_52))) == (*l_52)) < g_51[2]) , g_51[2]);
    (*l_53) = ((*l_50) & (*l_53));
    return g_22;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_51[i], "g_51[i]", print_hash_value);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_142.f1, "g_142.f1", print_hash_value);
    transparent_crc(g_142.f2, "g_142.f2", print_hash_value);
    transparent_crc(g_142.f3, "g_142.f3", print_hash_value);
    transparent_crc(g_142.f4, "g_142.f4", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_174[i], "g_174[i]", print_hash_value);

    }
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_293[i], "g_293[i]", print_hash_value);

    }
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_370.f0, "g_370.f0", print_hash_value);
    transparent_crc(g_370.f1, "g_370.f1", print_hash_value);
    transparent_crc(g_370.f2, "g_370.f2", print_hash_value);
    transparent_crc(g_370.f3, "g_370.f3", print_hash_value);
    transparent_crc(g_370.f4, "g_370.f4", print_hash_value);
    transparent_crc(g_372.f0, "g_372.f0", print_hash_value);
    transparent_crc(g_372.f1, "g_372.f1", print_hash_value);
    transparent_crc(g_372.f2, "g_372.f2", print_hash_value);
    transparent_crc(g_372.f3, "g_372.f3", print_hash_value);
    transparent_crc(g_372.f4, "g_372.f4", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_465.f0, "g_465.f0", print_hash_value);
    transparent_crc(g_465.f1, "g_465.f1", print_hash_value);
    transparent_crc(g_465.f2, "g_465.f2", print_hash_value);
    transparent_crc(g_465.f3, "g_465.f3", print_hash_value);
    transparent_crc(g_465.f4, "g_465.f4", print_hash_value);
    transparent_crc(g_471.f0, "g_471.f0", print_hash_value);
    transparent_crc(g_471.f1, "g_471.f1", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
