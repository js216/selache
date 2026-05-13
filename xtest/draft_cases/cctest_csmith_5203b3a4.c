// SPDX-License-Identifier: MIT
// cctest_csmith_5203b3a4.c --- cctest case csmith_5203b3a4 (csmith seed 1375974308)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb68180ce */

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

// Options:   -s 1375974308 -o /tmp/csmith_gen_dw_6v9_r/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   const int32_t  f1;
   const uint8_t  f2;
};

union U1 {
   int64_t  f0;
   uint16_t  f1;
};


static uint16_t g_8[3] = {0xA47CL,0xA47CL,0xA47CL};
static struct S0 g_27 = {1L,-10L,0UL};
static int32_t g_43 = 1L;
static uint16_t g_65 = 0xE54BL;
static uint32_t g_97 = 18446744073709551610UL;
static union U1 g_107[1][5] = {{{1L},{1L},{1L},{1L},{1L}}};
static uint16_t g_110 = 0UL;
static uint64_t g_111 = 18446744073709551608UL;
static int32_t g_112[3] = {0x10CDF194L,0x10CDF194L,0x10CDF194L};
static uint8_t g_113[4][3] = {{0UL,2UL,2UL},{0x89L,1UL,1UL},{0UL,2UL,2UL},{0x89L,1UL,1UL}};
static struct S0 g_115 = {1L,0x4CCE31A5L,1UL};
static uint32_t g_170 = 0x0CA3772BL;
static int64_t g_212 = (-8L);
static uint16_t g_213[1] = {0x5C00L};
static uint64_t g_214[1][5][5] = {{{0x438B63535620B5F7LL,0xA68A6C423DE851E6LL,0xA68A6C423DE851E6LL,0x438B63535620B5F7LL,0x438B63535620B5F7LL},{0x123F684F3E036E82LL,0xE5196A25B173B0BALL,0x123F684F3E036E82LL,0xE5196A25B173B0BALL,0x123F684F3E036E82LL},{0x438B63535620B5F7LL,0x438B63535620B5F7LL,0xA68A6C423DE851E6LL,0xA68A6C423DE851E6LL,0x438B63535620B5F7LL},{0x326DC8C82E536011LL,0xE5196A25B173B0BALL,0x326DC8C82E536011LL,0xE5196A25B173B0BALL,0x326DC8C82E536011LL},{0x438B63535620B5F7LL,0xA68A6C423DE851E6LL,0xA68A6C423DE851E6LL,0x438B63535620B5F7LL,0x438B63535620B5F7LL}}};
static int16_t g_225[5] = {0x4E36L,0x4E36L,0x4E36L,0x4E36L,0x4E36L};
static int8_t g_260 = (-10L);
static int16_t g_261 = 0x7E22L;
static uint32_t g_262 = 0x4F516043L;
static uint16_t g_301 = 0UL;
static int8_t g_379 = 1L;
static uint64_t g_380[4] = {1UL,1UL,1UL,1UL};
static int64_t g_418[4] = {0x1C892F8CDF2B2ED5LL,0x1C892F8CDF2B2ED5LL,0x1C892F8CDF2B2ED5LL,0x1C892F8CDF2B2ED5LL};
static int8_t g_419 = (-1L);
static uint32_t g_420 = 0x5EA57C7AL;
static int32_t g_433 = 0x0CC5DC2EL;



static uint32_t  func_1(void);
static uint64_t  func_5(int16_t  p_6, struct S0  p_7);
static int32_t  func_10(struct S0  p_11, const uint64_t  p_12, int64_t  p_13, struct S0  p_14);
static int8_t  func_17(int16_t  p_18, int32_t  p_19, uint16_t  p_20, struct S0  p_21, uint16_t  p_22);




static uint32_t  func_1(void)
{ 
    int32_t l_4 = 0xB40194DDL;
    struct S0 l_9 = {0x65E3L,0xDFA831EBL,0x39L};
    uint64_t l_352 = 0x0DD6E749ECA4B766LL;
    int32_t l_367 = 0x25AB7275L;
    if (((safe_add_func_int8_t_s_s(((l_4 & ((func_5(g_8[2], l_9) == 0UL) <= g_115.f1)) , 1L), 0xDFL)) && 0xDF5632F5L))
    { 
        uint32_t l_347 = 0x05F66D64L;
        int32_t l_368[4] = {(-2L),(-2L),(-2L),(-2L)};
        int i;
        if ((safe_div_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((l_352 = ((safe_rshift_func_uint16_t_u_u(((l_347 , l_4) > 4L), (g_8[2] = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_212 == g_27.f2), 3)), 0xB9L))))) && 4294967295UL)) != g_260), l_347)), g_115.f1)) && l_9.f1), l_347)))
        { 
lbl_369:
            l_368[2] ^= (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((g_113[1][1] = (safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(0UL, (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(0xFC0EL, l_9.f1)) & g_261), l_9.f1)))) || l_367), l_347)), 0xFB300FBA2EC1DA39LL))), l_347)), g_213[0]));
        }
        else
        { 
            uint32_t l_374 = 0xFB602AEEL;
            if (g_65)
                goto lbl_369;
            g_43 = (g_8[2] | ((safe_mul_func_uint16_t_u_u(((-1L) && (((l_367 &= 0xC5C8L) < ((l_374 != l_368[2]) == g_225[3])) < g_8[0])), 0x8B05L)) && g_107[0][3].f1));
        }
    }
    else
    { 
        uint8_t l_385 = 9UL;
        int64_t l_386 = 0x1B5F08C032CB9F6FLL;
        int8_t l_417[2];
        int i;
        for (i = 0; i < 2; i++)
            l_417[i] = 8L;
        g_43 |= (safe_sub_func_int32_t_s_s((((((safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint32_t_u((++g_380[3]))))) , (l_367 = ((safe_lshift_func_int16_t_s_u(7L, 2)) , (g_115.f1 , (((g_214[0][1][0] ^ (l_385 && l_386)) > g_27.f0) , g_111))))) && 0x83FA32E5L) == 0x60L) & 18446744073709551615UL), 0x238A8426L));
        g_43 = ((g_213[0] = (((safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s((((((0xE075F66BL ^ ((((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(l_385, (-1L))), g_260)) >= g_65) || 0x33DC61EB57BD719ELL) <= l_367)) , 1L) < g_113[0][2]) && g_260) == 0x118CL), g_107[0][3].f1)), l_386)) <= g_380[0]), 7)), 0x78902750L)) <= g_225[3]), g_225[3])) & l_352) & g_8[2])) & 65532UL);
        g_43 = (((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((g_170 == ((l_367 ^= (safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((-4L), l_9.f1)), ((g_8[2] ^ g_8[1]) > l_9.f2))) & 1L), l_385)), l_385))) && g_380[3])) || l_9.f0), 2)), l_9.f2)), g_110)) > l_417[1]) == 0x9B92B15602503234LL);
    }
    g_420++;
    for (g_419 = 0; (g_419 <= 3); g_419 += 1)
    { 
        int i;
        g_433 = (safe_div_func_int32_t_s_s(((g_43 = ((safe_add_func_int64_t_s_s(6L, (((safe_sub_func_int16_t_s_s(((g_301 |= g_380[g_419]) , ((safe_div_func_uint32_t_u_u((l_9.f2 && ((safe_add_func_int16_t_s_s(((g_113[0][2] = g_379) >= l_9.f0), g_225[2])) | g_380[2])), g_418[1])) > 0xCB73L)), l_9.f0)) >= g_380[g_419]) == g_380[g_419]))) > g_213[0])) ^ 4294967287UL), g_380[g_419]));
    }
    return g_379;
}



static uint64_t  func_5(int16_t  p_6, struct S0  p_7)
{ 
    struct S0 l_15 = {0x2969L,-1L,0x5FL};
    union U1 l_25 = {0x940C9BA5B0420410LL};
    int32_t l_26 = 0x25FC1C57L;
    uint16_t l_114 = 65527UL;
    uint32_t l_256 = 0x661819A6L;
    if (func_10(l_15, (g_113[0][2] = (g_112[0] = (g_111 |= ((safe_unary_minus_func_int64_t_s(((func_17((safe_unary_minus_func_uint16_t_u((!(p_6 && (l_26 |= (((0UL || (l_25 , g_8[2])) ^ p_6) < l_15.f0)))))), g_8[2], l_15.f0, g_27, l_25.f0) , l_15.f2) <= 0L))) , p_7.f2)))), l_114, g_115))
    { 
        int32_t l_243 = 0x199EC3F4L;
        int32_t l_244 = 0x4B8FFC6AL;
        if (g_113[3][2])
        { 
            g_43 = 7L;
        }
        else
        { 
            uint8_t l_245 = 1UL;
            int32_t l_259 = 0x835C9623L;
            g_43 = ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u(0L, ((g_170 , ((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(((l_245--) | (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((((l_256 || (l_26 &= ((safe_mul_func_uint8_t_u_u(0UL, p_7.f2)) && 0L))) , l_243) | 249UL), l_244)), 7)), 15)) || g_214[0][3][1]), p_7.f1))), 1UL)) >= p_7.f1) && l_15.f2), p_7.f1)), p_7.f1)), 6)), 2UL)) != l_244)) , g_213[0]))) , (-1L)), 9)) != l_259);
            l_259 = g_112[0];
            g_262++;
        }
        return l_244;
    }
    else
    { 
        const uint32_t l_269 = 0x6744AC8FL;
        int32_t l_282[4][3] = {{5L,5L,5L},{0L,0x038AB733L,0L},{5L,5L,5L},{0L,0x038AB733L,0L}};
        uint32_t l_311 = 0x66FA5968L;
        int i, j;
        for (g_262 = 0; (g_262 <= 0); g_262 += 1)
        { 
            uint64_t l_281 = 0xD0280CFF7C043BD0LL;
            int32_t l_302 = 0L;
            l_282[3][1] = ((safe_rshift_func_int8_t_s_s((l_26 |= (safe_mod_func_uint16_t_u_u(((l_269 && (safe_mod_func_int16_t_s_s((~(0x68F17BB5L <= 0L)), (~((safe_div_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(((+(((safe_rshift_func_int8_t_s_s(g_27.f1, 3)) <= p_7.f2) >= g_261)) && 4L), p_6)) == 0UL) != l_281), g_113[0][2])) | g_115.f1))))) | g_27.f2), g_27.f0))), 1)) != g_110);
            if ((p_7.f2 & (safe_lshift_func_uint8_t_u_u(((0x16L | ((safe_add_func_int32_t_s_s(((((255UL < (((safe_mod_func_int16_t_s_s(0x6964L, l_256)) & 0x6459L) && 1L)) <= p_7.f0) >= 0xCB2BL) & 1L), 0UL)) == l_269)) > p_7.f2), 7))))
            { 
                uint8_t l_295[2][3][4] = {{{0x45L,0x48L,1UL,1UL},{0x18L,0x18L,1UL,255UL},{0x18L,0xDDL,1UL,0x18L}},{{0x45L,255UL,0x45L,1UL},{0x48L,255UL,1UL,0x18L},{255UL,0xDDL,0xDDL,255UL}}};
                int32_t l_296 = (-1L);
                int i, j, k;
                l_296 |= (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(g_27.f1, ((safe_sub_func_uint8_t_u_u(0x1CL, (0x810FF72CL || l_295[1][2][1]))) , p_7.f0))), p_7.f2));
            }
            else
            { 
                l_282[3][1] = (((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(0xF56DL, (l_282[0][2] == (((2UL != ((g_115 , g_225[3]) == l_26)) < p_6) && l_15.f0)))) && g_43), p_7.f0)) || g_301) , 0x43A5B38CL);
                l_282[3][1] = ((l_302 &= g_170) ^ (((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((!(l_26 == (safe_add_func_int16_t_s_s((g_225[3] = (-1L)), (p_7.f0 = (g_27 , l_282[0][1])))))), g_214[0][2][3])), 0x9E647D65L)) , 0x74L) || l_15.f0));
            }
            for (l_15.f0 = 0; (l_15.f0 <= 0); l_15.f0 += 1)
            { 
                int64_t l_310[4][4][1] = {{{0x5E783D5683CA587ELL},{(-2L)},{8L},{(-2L)}},{{0x5E783D5683CA587ELL},{0x393B26D631787920LL},{0x393B26D631787920LL},{0x5E783D5683CA587ELL}},{{(-2L)},{8L},{(-2L)},{0x5E783D5683CA587ELL}},{{0x393B26D631787920LL},{0x393B26D631787920LL},{0x5E783D5683CA587ELL},{(-2L)}}};
                int i, j, k;
                ++l_311;
            }
        }
        if (((safe_lshift_func_uint8_t_u_s(0x79L, 2)) != g_27.f0))
        { 
            return l_282[1][1];
        }
        else
        { 
            int32_t l_318 = (-3L);
            g_43 = (safe_div_func_int64_t_s_s((l_318 = p_7.f2), g_111));
        }
        if (l_26)
            goto lbl_332;
        if (((((g_113[3][1] = (l_282[3][0] = ((safe_mod_func_uint16_t_u_u(0x94FFL, (((l_26 = g_214[0][0][3]) > (safe_mul_func_uint8_t_u_u(((g_111 = (safe_mod_func_int8_t_s_s((p_6 | (1L ^ g_214[0][1][1])), g_111))) >= p_6), l_15.f0))) | 0x84L))) ^ 0xAC8D62DBF7B13930LL))) == l_25.f1) | 3UL) && 4294967295UL))
        { 
lbl_332:
            for (g_212 = 2; (g_212 >= 0); g_212 -= 1)
            { 
                int32_t l_331 = 0x3FB7B5DEL;
                int i;
                g_43 ^= g_112[g_212];
                l_331 |= ((p_7.f1 || (p_7.f1 == (safe_sub_func_int64_t_s_s(((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_s((g_27.f1 , 0L), l_15.f0)) | 0L) ^ 3L) >= p_7.f1), 0xC0F15AB4L)) < 3UL), p_7.f0)))) < p_7.f0);
            }
            l_26 &= 0x93E811ACL;
            return p_7.f1;
        }
        else
        { 
            uint8_t l_335 = 253UL;
            if (g_170)
            { 
                g_43 = (((safe_lshift_func_int8_t_s_u(((g_214[0][3][4] <= ((((g_260 = (g_8[2] & ((g_212 ^= l_335) || (safe_mod_func_uint8_t_u_u(((~252UL) , 0xA7L), 0x8EL))))) > l_15.f2) && 9L) & p_6)) != g_27.f2), g_115.f0)) >= 252UL) > 0xE0266378L);
                g_43 |= g_27.f2;
                return g_43;
            }
            else
            { 
                g_43 = g_214[0][1][1];
                return l_282[3][1];
            }
        }
    }
}



static int32_t  func_10(struct S0  p_11, const uint64_t  p_12, int64_t  p_13, struct S0  p_14)
{ 
    uint8_t l_129[4][5] = {{0UL,1UL,0UL,0x5BL,0x5BL},{1UL,0UL,1UL,254UL,254UL},{0UL,1UL,0UL,0x5BL,0x5BL},{1UL,0UL,1UL,254UL,254UL}};
    const int32_t l_130[4][4][1] = {{{(-1L)},{1L},{(-1L)},{0xDF6465DCL}},{{(-1L)},{1L},{(-1L)},{0xDF6465DCL}},{{(-1L)},{1L},{(-1L)},{0xDF6465DCL}},{{(-1L)},{1L},{(-1L)},{0xDF6465DCL}}};
    int32_t l_155 = 0x47E747E0L;
    int i, j, k;
    for (g_111 = 0; (g_111 <= 2); g_111 += 1)
    { 
        const uint16_t l_116[4][5][2] = {{{3UL,0xE8C2L},{0xBF0AL,0xBF0AL},{0xE8C2L,3UL},{0x0755L,3UL},{0xE8C2L,0xBF0AL}},{{0xBF0AL,0xE8C2L},{3UL,0x0755L},{3UL,0xE8C2L},{0xBF0AL,0xBF0AL},{0xE8C2L,3UL}},{{0x0755L,3UL},{0xE8C2L,0xBF0AL},{0xBF0AL,0xE8C2L},{3UL,0x0755L},{3UL,0xE8C2L}},{{0xBF0AL,0xBF0AL},{0xE8C2L,3UL},{0x0755L,3UL},{0xE8C2L,0xBF0AL},{0xBF0AL,0xE8C2L}}};
        int32_t l_131 = (-1L);
        uint32_t l_147 = 0x8D7FAAE3L;
        int32_t l_191[4][3] = {{0x0190B99AL,0x0190B99AL,0x0190B99AL},{0xFDD43B54L,0xFDD43B54L,0xFDD43B54L},{0x0190B99AL,0x0190B99AL,0x0190B99AL},{0xFDD43B54L,0xFDD43B54L,0xFDD43B54L}};
        int32_t l_192 = (-10L);
        int i, j, k;
        g_43 ^= l_116[0][0][1];
        if ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((g_110 = ((g_65 = (l_129[2][2] = (safe_sub_func_uint64_t_u_u(0xDD5295B34A7E5ECDLL, ((safe_lshift_func_int16_t_s_s(l_116[3][4][0], 1)) ^ (g_107[0][3].f1++)))))) < ((p_14.f2 != p_11.f0) , l_130[2][3][0]))) < 0x5C2DL), l_130[0][1][0])) < l_130[2][3][0]) >= p_11.f1), l_130[3][3][0])), 5)))
        { 
            int32_t l_157 = (-6L);
            l_131 = 0x54279C2BL;
            if (((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((~((safe_div_func_int8_t_s_s((g_113[3][0] ^ ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(g_110, p_11.f2)), 5)) && ((safe_add_func_uint16_t_u_u(((((3L < g_27.f2) | g_97) > l_130[2][1][0]) ^ p_12), g_27.f1)) < l_147))), 0x29L)) <= l_116[0][0][1])), g_111)), l_129[2][2])) <= g_43))
            { 
                int8_t l_156 = 0x70L;
                l_156 &= (((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_s(0x11L, 4)))), p_14.f0)) != (safe_rshift_func_int16_t_s_u(l_129[2][2], 11))) | (l_155 = p_11.f0));
            }
            else
            { 
                int32_t l_171 = (-5L);
                l_157 &= 0x61A6B3F7L;
                l_131 = (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_112[2], g_107[0][3].f1)), (safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((p_14.f0 ^= (((safe_mod_func_uint16_t_u_u((((0xA4ADL > (++g_65)) != (g_170 |= ((p_14.f1 & l_157) != g_110))) || g_112[2]), l_129[2][2])) == l_171) > l_157)) , g_8[2]) | 1L), g_111)), 2L))));
            }
            g_43 &= (safe_rshift_func_int8_t_s_u(g_115.f2, (l_155 = l_157)));
        }
        else
        { 
            uint16_t l_194 = 0x8C41L;
            int32_t l_197 = 0xDB20BFABL;
            for (p_11.f0 = 0; (p_11.f0 <= 2); p_11.f0 += 1)
            { 
                union U1 l_184 = {0xFFA272E7E9FB3AEFLL};
                int32_t l_193 = 0xF5B55EC7L;
                l_191[0][1] = (g_43 = (safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((((safe_div_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(g_8[2], (l_131 = ((safe_sub_func_int16_t_s_s((l_184 , (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_184.f1 && (((l_155 = p_13) <= g_8[1]) != g_113[0][2])), 1L)), g_107[0][3].f1)) > (-2L)), 2))), 0x98F7L)) >= 6L)))) == 0UL), p_14.f2)) == p_14.f1) , l_116[0][0][1]), g_112[0])) <= l_147), g_8[0])));
                --l_194;
                if (p_14.f1)
                    break;
            }
            l_197 = 0x1A045332L;
            l_197 &= g_113[3][1];
        }
        if (l_130[1][0][0])
            break;
        for (g_115.f0 = 2; (g_115.f0 >= 0); g_115.f0 -= 1)
        { 
            uint32_t l_226 = 0UL;
            if ((0L || (p_14.f2 , (g_214[0][1][1] = ((((l_155 = (safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((g_213[0] ^= (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((g_27.f0 = (safe_sub_func_int8_t_s_s((p_14.f0 > (g_212 = (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(p_14.f0, g_43)) > l_191[3][1]), g_27.f2)))), p_14.f1))), 0x95BEL)), 8L))), g_113[0][2])), l_155))) ^ g_27.f2) > g_112[0]) < (-1L))))))
            { 
                l_155 ^= 0x1DABA5DBL;
                g_43 = 1L;
            }
            else
            { 
                int32_t l_224[1][4] = {{0xA7965D11L,0xA7965D11L,0xA7965D11L,0xA7965D11L}};
                int i, j;
                l_155 = (safe_rshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((((g_8[2] & ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(g_27.f0, 11)) > l_129[3][3]), (g_113[g_115.f0][g_115.f0] = (+((0xBDBDL < g_111) == 1UL))))) & 0UL)) | p_14.f1) & l_116[0][0][1]), p_13)), l_224[0][1]));
                ++l_226;
            }
            g_43 = 0x431BED74L;
        }
    }
    return p_11.f1;
}



static int8_t  func_17(int16_t  p_18, int32_t  p_19, uint16_t  p_20, struct S0  p_21, uint16_t  p_22)
{ 
    uint64_t l_38 = 1UL;
    int8_t l_39 = 0x65L;
    int32_t l_44 = 0L;
    const int8_t l_72 = 4L;
lbl_68:
    for (p_19 = 2; (p_19 >= 0); p_19 -= 1)
    { 
        int i;
        return g_8[p_19];
    }
    for (p_20 = 0; (p_20 > 40); p_20 = safe_add_func_int16_t_s_s(p_20, 1))
    { 
        uint8_t l_40 = 252UL;
        int32_t l_64[3][4];
        int32_t l_108[1][3][1];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_64[i][j] = 5L;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_108[i][j][k] = 0xDF46991EL;
            }
        }
        l_40 |= ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(253UL, (safe_lshift_func_uint16_t_u_u(((g_27.f0 < (safe_mod_func_uint8_t_u_u(3UL, ((l_38 < g_27.f0) & 2L)))) > l_38), g_27.f2)))), l_39)) && p_22);
        if ((l_44 = (safe_add_func_int32_t_s_s((g_43 = 0xF7828E97L), g_27.f1))))
        { 
            uint32_t l_47[2];
            uint64_t l_48 = 0x3FE767E7924A04C7LL;
            uint8_t l_57 = 0UL;
            int i;
            for (i = 0; i < 2; i++)
                l_47[i] = 18446744073709551606UL;
            l_44 |= 0L;
            if (((safe_mul_func_int16_t_s_s((l_47[0] != p_21.f0), (l_48 == p_19))) > l_40))
            { 
                const int64_t l_62 = 1L;
                g_43 = (safe_lshift_func_int16_t_s_u((g_27.f0 = (((((((safe_add_func_uint16_t_u_u(0x2E43L, ((l_47[0] | ((((safe_mod_func_int16_t_s_s(((((+(!l_57)) & ((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s((p_20 & g_8[2]), p_18)), l_40)) , p_19)) != (-3L)) , 0L), l_62)) && g_27.f1) && l_40) >= l_40)) || p_20))) , (-8L)) || 0x76E6L) != g_27.f0) <= p_22) <= l_62) ^ 0x21B0A093L)), g_8[2]));
                if (l_40)
                    break;
            }
            else
            { 
                int32_t l_63 = (-9L);
                ++g_65;
                if (g_27.f1)
                    goto lbl_68;
                return g_27.f1;
            }
        }
        else
        { 
            g_43 = ((~(((safe_add_func_int16_t_s_s((l_72 | (--p_22)), ((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((+(l_44 = ((g_27.f1 || 1UL) != (safe_mul_func_int8_t_s_s((p_18 != g_65), p_19))))), l_38)) > p_18), g_65)) & 6L))) >= 0x75DCB435L) != p_21.f0)) & l_38);
        }
        for (g_65 = 0; (g_65 < 21); ++g_65)
        { 
            uint16_t l_96 = 0xFA1DL;
            uint16_t l_109 = 65526UL;
            for (g_43 = 0; (g_43 > (-2)); --g_43)
            { 
                l_64[1][2] = (safe_mul_func_int16_t_s_s(((p_21.f0 > 4294967292UL) <= g_43), (safe_add_func_uint64_t_u_u(p_21.f1, p_21.f1))));
            }
            for (p_22 = (-1); (p_22 > 24); p_22 = safe_add_func_uint64_t_u_u(p_22, 1))
            { 
                int64_t l_95 = (-1L);
                g_43 ^= (safe_mod_func_uint8_t_u_u((+l_40), (g_97 = (l_96 = l_95))));
                g_110 &= ((p_21.f1 && 0x9668L) & ((((safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((((safe_div_func_int32_t_s_s((!((g_8[2] = ((((safe_rshift_func_uint16_t_u_u((l_108[0][1][0] = (g_107[0][3] , (((l_64[1][2] = g_8[2]) || g_27.f1) & 0x343BB5AFL))), l_109)) ^ p_21.f0) ^ 0L) , p_19)) && 65527UL)), p_21.f1)) && 0xDEB2L) > p_21.f1) ^ p_18), 0x79L)) , 0x3BL), g_107[0][3].f0)) >= 0L) | l_95) != g_43));
                if (p_21.f2)
                    continue;
            }
        }
    }
    return p_20;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);

    }
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_107[i][j].f1, "g_107[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_112[i], "g_112[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_113[i][j], "g_113[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f1, "g_115.f1", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_213[i], "g_213[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_214[i][j][k], "g_214[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_225[i], "g_225[i]", print_hash_value);

    }
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_380[i], "g_380[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_418[i], "g_418[i]", print_hash_value);

    }
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
