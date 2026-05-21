// SPDX-License-Identifier: MIT
// cctest_csmith_dbd90cd9.c --- cctest case csmith_dbd90cd9 (csmith seed 3688434905)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf99aead */

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

// Options:   -s 3688434905 -o /tmp/csmith_gen_whhgwox5/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint64_t  f0;
   int32_t  f1;
};

union U1 {
   const uint16_t  f0;
   int32_t  f1;
};

union U2 {
   struct S0  f0;
   uint8_t  f1;
   const int32_t  f2;
};

union U3 {
   int64_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   struct S0  f3;
   uint32_t  f4;
};


static uint8_t g_7 = 2UL;
static uint16_t g_12 = 0x5145L;
static struct S0 g_18 = {6UL,0xCAEA0A9FL};
static union U3 g_19 = {-1L};
static uint16_t *g_41 = &g_12;
static int16_t g_52 = 0x04DBL;
static int8_t g_69[6][4] = {{0x57L,0x91L,0x91L,0x57L},{0x57L,0x91L,0x91L,0x57L},{0x57L,0x91L,0x91L,0x57L},{0x57L,0x91L,0x91L,0x57L},{0x57L,0x91L,0x91L,0x57L},{0x57L,0x91L,0x91L,0x57L}};
static uint32_t g_71 = 0x5B94995FL;
static int16_t g_95 = 0x13B6L;
static uint16_t g_96 = 0UL;
static uint32_t g_99 = 0x706B0045L;
static uint16_t g_135 = 0xAD0BL;
static const int32_t g_162 = 0L;
static int32_t *g_172 = &g_18.f1;
static uint16_t g_190 = 65526UL;
static const uint64_t g_192 = 0x5BC01747DCE05B8FLL;
static union U1 g_194 = {65532UL};
static uint16_t g_200[4][3][3] = {{{0x3CD5L,0x3CD5L,65533UL},{0xA1EDL,0xE68AL,0xE68AL},{65533UL,5UL,7UL}},{{0xA1EDL,65529UL,0xA1EDL},{0x3CD5L,65533UL,7UL},{0x643CL,0x643CL,0xE68AL}},{{0UL,65533UL,65533UL},{0xE68AL,0x643CL,65529UL},{7UL,0x3CD5L,7UL}},{{0xE68AL,0xA1EDL,65529UL},{65533UL,65533UL,0UL},{0x93BAL,0xA1EDL,0xA1EDL}}};
static int32_t g_203 = (-1L);
static int64_t g_204 = 2L;
static uint8_t g_205 = 0xD0L;
static int32_t g_262 = 0xA38F9060L;
static int16_t g_263 = 0x9F9CL;
static int32_t g_264 = 1L;
static uint32_t g_265 = 0xA393618BL;
static union U2 g_271 = {{0xFA6EF5A8E44C22DBLL,0xC6B98985L}};
static uint64_t g_277[6][7][6] = {{{18446744073709551615UL,18446744073709551610UL,1UL,0x2B8542A959411BBBLL,9UL,0xC622FEB6F9DCD163LL},{18446744073709551615UL,1UL,0x2B8542A959411BBBLL,0x1D6868DB94445633LL,18446744073709551615UL,6UL},{18446744073709551615UL,0x568024934B0F5AFBLL,18446744073709551610UL,0UL,1UL,0x60064F0C366B9736LL},{18446744073709551613UL,0x5AFFB38D032AA6A7LL,0x1D6868DB94445633LL,18446744073709551610UL,7UL,0x2B8542A959411BBBLL},{0UL,0x5AFFB38D032AA6A7LL,18446744073709551614UL,6UL,1UL,18446744073709551614UL},{1UL,0x568024934B0F5AFBLL,0x958F3101816B8A69LL,0xF512955A25A28296LL,18446744073709551615UL,18446744073709551615UL},{0x39B4C0E798E6DE8ELL,1UL,0xC622FEB6F9DCD163LL,18446744073709551613UL,9UL,0x958F3101816B8A69LL}},{{0x378054361898E5B0LL,18446744073709551610UL,0xC622FEB6F9DCD163LL,18446744073709551615UL,0x568024934B0F5AFBLL,18446744073709551615UL},{0x958F3101816B8A69LL,18446744073709551612UL,0x958F3101816B8A69LL,0x60064F0C366B9736LL,0xBFC902FF4225F346LL,18446744073709551614UL},{0x60064F0C366B9736LL,0xBFC902FF4225F346LL,18446744073709551614UL,0xE5D73EC10CD837A4LL,0UL,0x2B8542A959411BBBLL},{0xF512955A25A28296LL,0x01CA62E3C5A3DE78LL,0x1D6868DB94445633LL,0xE5D73EC10CD837A4LL,0xB632DDB291FB98A5LL,0x60064F0C366B9736LL},{0x60064F0C366B9736LL,0x53890954F3EA3D8ALL,18446744073709551610UL,0x60064F0C366B9736LL,18446744073709551610UL,6UL},{0x958F3101816B8A69LL,0x1393ED614374FFD2LL,0x2B8542A959411BBBLL,18446744073709551615UL,0xFC381A5ED34DC581LL,0xC622FEB6F9DCD163LL},{0x378054361898E5B0LL,9UL,1UL,18446744073709551613UL,0xFC381A5ED34DC581LL,3UL}},{{0x39B4C0E798E6DE8ELL,0x1393ED614374FFD2LL,0x60064F0C366B9736LL,0xF512955A25A28296LL,18446744073709551610UL,18446744073709551613UL},{1UL,0x53890954F3EA3D8ALL,0UL,6UL,0xB632DDB291FB98A5LL,0x378054361898E5B0LL},{0UL,0x01CA62E3C5A3DE78LL,0x39B4C0E798E6DE8ELL,18446744073709551610UL,0UL,0x378054361898E5B0LL},{18446744073709551613UL,0xBFC902FF4225F346LL,0UL,0UL,0xBFC902FF4225F346LL,18446744073709551613UL},{18446744073709551615UL,18446744073709551612UL,0x60064F0C366B9736LL,0x1D6868DB94445633LL,0x568024934B0F5AFBLL,3UL},{18446744073709551615UL,18446744073709551610UL,1UL,0x2B8542A959411BBBLL,9UL,0xC622FEB6F9DCD163LL},{18446744073709551615UL,1UL,0x2B8542A959411BBBLL,0x1D6868DB94445633LL,18446744073709551615UL,6UL}},{{18446744073709551615UL,0x568024934B0F5AFBLL,18446744073709551610UL,0UL,1UL,0x60064F0C366B9736LL},{18446744073709551613UL,0x5AFFB38D032AA6A7LL,0x1D6868DB94445633LL,18446744073709551610UL,7UL,0x2B8542A959411BBBLL},{0UL,0x5AFFB38D032AA6A7LL,18446744073709551614UL,6UL,1UL,18446744073709551614UL},{1UL,0x568024934B0F5AFBLL,0x958F3101816B8A69LL,0xF512955A25A28296LL,18446744073709551615UL,18446744073709551615UL},{0x39B4C0E798E6DE8ELL,1UL,0xC622FEB6F9DCD163LL,18446744073709551613UL,9UL,0x958F3101816B8A69LL},{0x378054361898E5B0LL,18446744073709551610UL,0xC622FEB6F9DCD163LL,18446744073709551615UL,0x568024934B0F5AFBLL,18446744073709551615UL},{0x958F3101816B8A69LL,18446744073709551612UL,0x958F3101816B8A69LL,0x60064F0C366B9736LL,0xBFC902FF4225F346LL,18446744073709551614UL}},{{0x60064F0C366B9736LL,0xBFC902FF4225F346LL,18446744073709551614UL,0xE5D73EC10CD837A4LL,0UL,0x2B8542A959411BBBLL},{0xF512955A25A28296LL,0x01CA62E3C5A3DE78LL,0x1D6868DB94445633LL,18446744073709551613UL,0x958F3101816B8A69LL,9UL},{9UL,1UL,1UL,9UL,0xF512955A25A28296LL,0xFC72A1215F5D2826LL},{0UL,18446744073709551610UL,18446744073709551614UL,0x6D39F524A4F3CDA2LL,0UL,0x3E9E2F2D2754F78DLL},{0UL,0xC622FEB6F9DCD163LL,9UL,0x4473CCB1EF512BB2LL,0UL,18446744073709551608UL},{0x24AB9F46A099E6CCLL,18446744073709551610UL,9UL,0x95AE5765BE7C3BE6LL,0xF512955A25A28296LL,0x4473CCB1EF512BB2LL},{9UL,1UL,0x27867CC06EC8495DLL,0xFC72A1215F5D2826LL,0x958F3101816B8A69LL,0UL}},{{0x27867CC06EC8495DLL,18446744073709551613UL,0x24AB9F46A099E6CCLL,1UL,6UL,0UL},{0x4473CCB1EF512BB2LL,0xE5D73EC10CD837A4LL,0x27867CC06EC8495DLL,0x27867CC06EC8495DLL,0xE5D73EC10CD837A4LL,0x4473CCB1EF512BB2LL},{0UL,18446744073709551614UL,9UL,0x89D981C66F583123LL,0x378054361898E5B0LL,18446744073709551608UL},{0x6D39F524A4F3CDA2LL,0xF512955A25A28296LL,9UL,18446744073709551614UL,0xC622FEB6F9DCD163LL,0x3E9E2F2D2754F78DLL},{0x6D39F524A4F3CDA2LL,0x2B8542A959411BBBLL,18446744073709551614UL,0x89D981C66F583123LL,0x39B4C0E798E6DE8ELL,0xFC72A1215F5D2826LL},{0UL,0x378054361898E5B0LL,1UL,0x27867CC06EC8495DLL,0x2B8542A959411BBBLL,9UL},{0x4473CCB1EF512BB2LL,18446744073709551615UL,0x89D981C66F583123LL,1UL,0x2583E332AA214F20LL,18446744073709551614UL}}};
static union U1 *g_312 = &g_194;
static union U1 **g_311 = &g_312;
static const union U1 **g_329 = (void*)0;
static const union U1 ***g_328 = &g_329;
static int16_t g_363[3] = {(-1L),(-1L),(-1L)};
static struct S0 *g_400 = &g_18;
static struct S0 **g_399[5][6][2] = {{{(void*)0,&g_400},{(void*)0,&g_400},{&g_400,&g_400},{&g_400,&g_400},{&g_400,&g_400},{(void*)0,&g_400}},{{(void*)0,(void*)0},{(void*)0,&g_400},{(void*)0,&g_400},{&g_400,&g_400},{&g_400,&g_400},{&g_400,&g_400}},{{(void*)0,&g_400},{(void*)0,(void*)0},{(void*)0,&g_400},{(void*)0,&g_400},{&g_400,&g_400},{&g_400,&g_400}},{{&g_400,&g_400},{(void*)0,&g_400},{(void*)0,(void*)0},{(void*)0,&g_400},{(void*)0,&g_400},{&g_400,&g_400}},{{&g_400,&g_400},{&g_400,&g_400},{(void*)0,&g_400},{(void*)0,(void*)0},{(void*)0,&g_400},{(void*)0,&g_400}}};
static uint64_t g_439 = 18446744073709551608UL;
static int16_t *g_510 = &g_52;
static int16_t **g_509 = &g_510;
static int64_t g_558 = 0x10E83FCA4021DC2BLL;
static uint16_t g_576 = 1UL;
static struct S0 ***g_581[5] = {&g_399[0][0][1],&g_399[0][0][1],&g_399[0][0][1],&g_399[0][0][1],&g_399[0][0][1]};
static struct S0 **** const g_580[6][7] = {{&g_581[1],&g_581[0],&g_581[0],&g_581[2],&g_581[0],&g_581[0],&g_581[1]},{&g_581[0],&g_581[1],&g_581[0],&g_581[0],&g_581[0],&g_581[0],&g_581[0]},{&g_581[1],&g_581[1],&g_581[3],&g_581[2],&g_581[0],&g_581[0],&g_581[1]},{&g_581[1],&g_581[0],&g_581[0],&g_581[2],&g_581[0],&g_581[0],&g_581[1]},{&g_581[0],&g_581[1],&g_581[0],&g_581[0],&g_581[0],&g_581[0],&g_581[0]},{&g_581[1],&g_581[1],&g_581[3],&g_581[2],&g_581[0],&g_581[0],&g_581[1]}};
static int32_t *g_592 = &g_271.f0.f1;
static int64_t g_593 = 0L;
static int32_t g_594 = 0xD4F3BF08L;
static int16_t g_595 = 0x5D3EL;
static const int16_t g_628 = (-1L);
static const int16_t *g_627 = &g_628;
static int64_t *g_640 = &g_204;
static union U1 g_711 = {6UL};
static union U1 *g_710 = &g_711;
static uint64_t g_714 = 18446744073709551615UL;
static union U2 *g_717 = (void*)0;
static int32_t g_732 = 0L;
static int32_t g_733 = (-10L);
static uint32_t g_734 = 18446744073709551613UL;
static int8_t g_749 = 0x9EL;
static int64_t g_750 = 1L;
static int8_t g_751 = 0L;
static uint32_t g_752 = 18446744073709551607UL;
static union U1 ***g_772 = &g_311;
static union U1 ****g_771[1][2][2] = {{{&g_772,&g_772},{&g_772,&g_772}}};
static const struct S0 ** const g_778 = (void*)0;
static const struct S0 ** const *g_777 = &g_778;
static uint32_t g_789 = 4294967287UL;
static int8_t g_852 = 8L;
static int64_t g_853 = 0L;
static uint32_t g_854 = 18446744073709551611UL;
static struct S0 *** const g_858 = (void*)0;
static struct S0 *** const *g_857 = &g_858;
static uint32_t g_867 = 6UL;
static struct S0 g_898 = {0xFC9A34C96F36F077LL,0xFA8F0847L};
static int16_t g_919 = 0x4F1EL;
static uint16_t g_929 = 0UL;
static uint16_t g_937 = 0x78D3L;
static uint32_t g_946 = 4294967295UL;
static struct S0 g_957 = {18446744073709551615UL,-2L};
static uint64_t g_974 = 0x482F2A395C1C0194LL;
static int8_t *g_987 = &g_751;
static int8_t **g_986[7] = {&g_987,&g_987,&g_987,&g_987,&g_987,&g_987,&g_987};
static union U3 *g_1010 = &g_19;
static int32_t g_1023 = 0xC3A1A0D0L;
static uint8_t g_1024 = 8UL;
static int8_t g_1040 = 0x4EL;
static int8_t ***g_1066 = (void*)0;
static int32_t g_1074 = 1L;
static uint16_t g_1075 = 0UL;
static int32_t g_1177[4][2][6] = {{{0x53874ADFL,0x53874ADFL,1L,(-6L),9L,1L},{(-6L),9L,1L,9L,(-6L),1L}},{{9L,(-6L),1L,0x53874ADFL,0x53874ADFL,1L},{0x53874ADFL,0x53874ADFL,1L,(-6L),9L,1L}},{{(-6L),9L,1L,9L,(-6L),1L},{9L,(-6L),1L,0x53874ADFL,0x53874ADFL,1L}},{{0x53874ADFL,0x53874ADFL,1L,(-6L),9L,1L},{(-6L),9L,1L,9L,(-6L),1L}}};
static int16_t **g_1198 = &g_510;
static uint8_t g_1288 = 250UL;
static uint8_t **g_1322 = (void*)0;
static int16_t g_1435[1] = {0x62E1L};
static int32_t ***g_1441 = (void*)0;
static const uint8_t g_1443 = 246UL;
static struct S0 **g_1548 = &g_400;
static int16_t ***g_1656 = &g_1198;
static int32_t ***g_1753[3] = {(void*)0,(void*)0,(void*)0};
static const int64_t g_1779 = 1L;
static int8_t ****g_1797 = &g_1066;



static union U3  func_1(void);
static union U3  func_2(int64_t  p_3, int32_t  p_4, struct S0  p_5, union U3  p_6);
static int32_t  func_20(const uint16_t * p_21, union U3  p_22, int16_t  p_23, uint32_t  p_24);
static union U3  func_25(uint16_t * p_26, struct S0  p_27, uint16_t * p_28);
static uint16_t * func_29(int32_t  p_30, uint16_t * p_31, union U1  p_32, struct S0  p_33);
static int32_t  func_34(uint16_t * p_35, uint32_t  p_36, int32_t  p_37, uint16_t * p_38);
static uint16_t * func_83(uint16_t ** p_84);
static int16_t  func_116(uint16_t * p_117, int32_t * p_118, uint16_t * p_119, uint32_t  p_120, uint16_t * p_121);




static union U3  func_1(void)
{ 
    int64_t l_10[1][2][4];
    uint16_t *l_11[7][7][1] = {{{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12}},{{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12}},{{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12}},{{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12}},{{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12}},{{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12}},{{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12},{&g_12}}};
    int32_t l_13 = 4L;
    int32_t l_14 = 1L;
    int64_t l_17 = 1L;
    int32_t *l_1825 = &g_732;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
                l_10[i][j][k] = 7L;
        }
    }
    (*l_1825) ^= ((func_2((g_7 >= ((safe_div_func_uint16_t_u_u((++g_12), 9UL)) , l_17)), l_17, g_18, g_19) , g_263) && 0x975A89F5L);
    return (*g_1010);
}



static union U3  func_2(int64_t  p_3, int32_t  p_4, struct S0  p_5, union U3  p_6)
{ 
    uint16_t *l_40 = (void*)0;
    uint16_t **l_39[7][7][3] = {{{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40}},{{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40}},{{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40}},{{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40}},{{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40}},{{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40}},{{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40},{&l_40,&l_40,&l_40}}};
    int32_t l_50 = 2L;
    int16_t *l_51 = &g_52;
    int32_t l_53 = 0x9B05F673L;
    union U1 l_1523 = {8UL};
    struct S0 l_1527 = {6UL,-4L};
    union U1 ***l_1535 = &g_311;
    uint64_t l_1553 = 3UL;
    int8_t l_1554 = 0x5CL;
    int32_t l_1564 = 0xE983E12DL;
    int32_t l_1579 = (-7L);
    int32_t l_1582[6] = {0xBC719B22L,(-1L),0xBC719B22L,0xBC719B22L,(-1L),0xBC719B22L};
    struct S0 ****l_1604 = &g_581[0];
    const union U1 l_1632[4] = {{65535UL},{65535UL},{65535UL},{65535UL}};
    union U2 l_1645 = {{4UL,0x63B5EAAAL}};
    const union U1 ***l_1657 = &g_329;
    uint16_t *l_1660 = &g_937;
    int32_t l_1699 = 0L;
    uint32_t l_1710 = 0xFB4F287AL;
    uint16_t *l_1736 = (void*)0;
    int64_t l_1775 = 0xAFF713386B73D6C4LL;
    int8_t ****l_1795 = &g_1066;
    const int16_t l_1818 = 0x6E49L;
    int i, j, k;
    if ((0UL && ((func_20(&g_12, func_25(func_29(((func_34((g_41 = (void*)0), ((void*)0 != &g_12), ((safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((l_53 |= ((*l_51) |= (((safe_add_func_uint32_t_u_u(g_18.f1, (p_3 <= l_50))) > p_5.f1) < g_19.f0))), g_19.f0)), 255UL)), g_18.f0)) != p_5.f1), &g_12) >= l_50) , 1L), &g_96, l_1523, p_5), l_1527, &g_1075), p_5.f0, g_263) < g_867) >= 0L)))
    { 
        struct S0 l_1539 = {0xAD3F5C151E9C6EC0LL,9L};
        union U2 l_1557 = {{0xE48A1404F72F628CLL,0x9C686F83L}};
        int32_t l_1571 = (-3L);
        int32_t l_1573 = (-4L);
        int32_t l_1574 = 0L;
        int32_t l_1577 = (-1L);
        int32_t l_1578 = 0L;
        int32_t l_1583[3];
        union U1 *****l_1631 = &g_771[0][0][0];
        int16_t * const *l_1652 = (void*)0;
        int16_t * const **l_1651 = &l_1652;
        int16_t ****l_1653 = (void*)0;
        int16_t ***l_1655[2];
        int16_t ****l_1654[1][3][6] = {{{&l_1655[1],&l_1655[1],&l_1655[1],&l_1655[1],&l_1655[1],&l_1655[1]},{&l_1655[1],&l_1655[1],&l_1655[1],&l_1655[1],&l_1655[1],&l_1655[1]},{&l_1655[1],&l_1655[1],&l_1655[1],&l_1655[1],&l_1655[1],&l_1655[1]}}};
        const union U1 ****l_1658[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint8_t *l_1659[3];
        uint16_t *l_1661 = &g_200[3][1][0];
        int32_t l_1737 = 1L;
        int32_t l_1754 = 1L;
        struct S0 ***l_1774[4][6][5] = {{{&g_399[0][0][1],&g_1548,&g_399[0][0][1],(void*)0,&g_1548},{&g_399[2][1][1],&g_399[1][5][0],&g_399[4][5][1],(void*)0,(void*)0},{&g_399[4][0][1],(void*)0,&g_399[0][0][1],&g_399[0][0][1],&g_1548},{&g_399[0][2][1],&g_399[0][0][1],&g_1548,&g_1548,&g_399[0][0][1]},{(void*)0,&g_399[0][2][1],&g_399[0][0][0],&g_399[0][2][1],(void*)0},{&g_399[1][2][0],&g_1548,&g_399[0][0][1],&g_1548,&g_399[1][5][0]}},{{&g_399[0][0][1],(void*)0,&g_1548,&g_1548,&g_399[0][0][1]},{&g_399[0][0][1],(void*)0,(void*)0,&g_1548,&g_399[1][5][0]},{&g_399[0][0][1],&g_1548,(void*)0,&g_399[0][0][1],(void*)0},{&g_399[1][5][0],(void*)0,&g_399[0][0][1],(void*)0,&g_399[0][0][1]},{&g_1548,(void*)0,&g_399[0][0][1],&g_399[0][0][1],&g_1548},{&g_399[0][0][1],&g_399[0][0][1],&g_399[0][0][1],(void*)0,(void*)0}},{{&g_399[0][0][1],&g_399[1][1][1],(void*)0,(void*)0,&g_1548},{&g_399[0][0][1],&g_399[0][2][1],&g_1548,&g_1548,&g_399[0][1][1]},{&g_399[0][0][1],&g_399[1][0][1],&g_399[4][0][1],(void*)0,&g_399[2][1][1]},{&g_1548,(void*)0,(void*)0,&g_399[0][1][1],(void*)0},{&g_399[1][5][0],&g_399[1][5][0],&g_1548,&g_399[0][2][1],&g_399[0][0][1]},{&g_399[0][0][1],&g_1548,&g_399[0][0][1],&g_1548,&g_399[2][1][1]}},{{&g_399[0][0][1],&g_1548,&g_399[1][5][1],&g_399[0][0][1],&g_1548},{&g_399[0][0][1],&g_1548,(void*)0,&g_399[0][0][1],&g_1548},{(void*)0,&g_399[0][0][1],&g_399[0][0][1],&g_399[0][0][0],(void*)0},{&g_399[4][5][0],&g_1548,&g_1548,&g_1548,(void*)0},{(void*)0,&g_399[0][0][1],(void*)0,&g_399[0][0][1],(void*)0},{&g_399[0][0][0],(void*)0,&g_1548,&g_399[4][5][1],&g_399[4][5][0]}}};
        int32_t *l_1783 = &l_53;
        union U3 *l_1815 = &g_19;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1583[i] = 1L;
        for (i = 0; i < 2; i++)
            l_1655[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_1659[i] = &g_19.f2;
        (*g_400) = p_5;
lbl_1629:
        for (g_749 = 4; (g_749 >= (-14)); g_749 = safe_sub_func_uint8_t_u_u(g_749, 8))
        { 
            union U1 ****l_1536 = &g_772;
            int32_t l_1542 = 0L;
            struct S0 **l_1549 = &g_400;
            struct S0 **l_1550 = &g_400;
            int32_t l_1567 = 0x9B17DDC3L;
            int32_t l_1568 = 1L;
            int32_t l_1569 = 0xCD8E827FL;
            int32_t l_1572 = 0xA58B8F89L;
            int32_t l_1576 = 0xB97E0825L;
            int32_t l_1581 = (-3L);
            int32_t l_1586[4] = {0x2B6AAC1BL,0x2B6AAC1BL,0x2B6AAC1BL,0x2B6AAC1BL};
            const struct S0 ***l_1606 = (void*)0;
            const struct S0 ****l_1605[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            int i, j;
            (*l_1536) = l_1535;
            if (p_5.f1)
                break;
        }
        for (g_595 = (-28); (g_595 > (-24)); g_595 = safe_add_func_uint64_t_u_u(g_595, 2))
        { 
            uint16_t l_1615 = 65527UL;
            int32_t **l_1618 = &g_172;
            union U3 l_1630 = {0xBC8D02FD3DD4718ELL};
            if (p_6.f4)
                break;
            for (g_957.f0 = 0; (g_957.f0 <= 22); g_957.f0++)
            { 
                int32_t *l_1614[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1614[i] = (void*)0;
                --l_1615;
            }
            if ((*g_172))
                continue;
            (*l_1618) = &l_1579;
            for (g_714 = (-9); (g_714 > 39); g_714 = safe_add_func_int64_t_s_s(g_714, 5))
            { 
                int32_t l_1621[3][1][7] = {{{(-1L),(-1L),3L,6L,3L,(-1L),(-1L)}},{{(-1L),3L,6L,3L,(-1L),(-1L),3L}},{{(-5L),1L,(-5L),3L,3L,(-5L),1L}}};
                int i, j, k;
                if ((l_1621[1][0][4] && ((*g_640) = 0xED0355BFD33B2A60LL)))
                { 
                    (**l_1618) = (*g_172);
                    return p_6;
                }
                else
                { 
                    uint8_t *l_1624 = &g_205;
                    (*g_172) = (safe_mul_func_uint8_t_u_u(p_4, ((*l_1624)--)));
                }
                for (g_203 = 2; (g_203 <= (-20)); g_203 = safe_sub_func_int8_t_s_s(g_203, 7))
                { 
                    if (g_749)
                        goto lbl_1629;
                    return l_1630;
                }
            }
        }
        if ((l_1631 != (l_1632[1] , (func_25(func_29(((((safe_lshift_func_int16_t_s_s(((*g_510) = ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(l_1553, (safe_div_func_int16_t_s_s((((safe_div_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((l_1645 , (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((!(g_1288 &= (((l_1651 != (g_1656 = &g_509)) & ((g_328 = l_1657) != (void*)0)) < g_264))), 0xB47EL)), 0x57L))), p_6.f4)) == 0xE6935799693BFC5FLL), g_1024)) <= (*g_640)) <= (**g_1198)), (**g_1198))))), 0x7A5E7CC992E32BA6LL)) && 251UL)), 5)) , p_6.f2) < l_1577) , 0x61EE747EL), l_1660, (***l_1535), (**g_1548)), p_5, l_1661) , &g_771[0][0][1]))))
        { 
            int64_t l_1666 = 0xC78311E35D5B8D5DLL;
            int8_t * const *l_1686[1][6][6];
            int8_t * const **l_1685 = &l_1686[0][5][2];
            int8_t * const ***l_1684 = &l_1685;
            uint64_t *l_1687 = &l_1645.f0.f0;
            int32_t l_1698[7];
            uint16_t l_1700 = 0x86FEL;
            const int64_t *l_1778 = &g_1779;
            const int64_t **l_1777 = &l_1778;
            union U2 **l_1793 = &g_717;
            const struct S0 l_1794[7] = {{0xBD3A84DA6C7B89F8LL,0x66622C13L},{0xBD3A84DA6C7B89F8LL,0x66622C13L},{0xBD3A84DA6C7B89F8LL,0x66622C13L},{0xBD3A84DA6C7B89F8LL,0x66622C13L},{0xBD3A84DA6C7B89F8LL,0x66622C13L},{0xBD3A84DA6C7B89F8LL,0x66622C13L},{0xBD3A84DA6C7B89F8LL,0x66622C13L}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 6; k++)
                        l_1686[i][j][k] = &g_987;
                }
            }
            for (i = 0; i < 7; i++)
                l_1698[i] = 0x8EB66175L;
            (*g_172) = (safe_mod_func_uint64_t_u_u(((*l_1687) = ((l_1527.f1 = ((*l_51) = (safe_add_func_int64_t_s_s((l_1553 > l_1666), (0xCBE4BD73944171C4LL != (((*g_987) = ((l_1577 = (safe_div_func_int8_t_s_s((p_4 != (safe_rshift_func_uint16_t_u_s(((l_1666 && (safe_div_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s((((g_71 || ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((p_5 , (void*)0) == l_1684), g_1023)), p_6.f0)), 3L)))), 1L)) | p_3)) , 0xE9F8L) == g_135), p_3)) <= p_6.f4) ^ p_5.f1) || p_5.f1), l_1554))) & 0x1AC76A41L), 5))), 255UL))) , l_1571)) != p_6.f2)))))) || l_1666)), 0x0A0C55677F5936E6LL));
            for (g_135 = 0; (g_135 <= 2); g_135 += 1)
            { 
                int32_t *l_1688 = &l_1557.f0.f1;
                int32_t *l_1689 = &g_1023;
                int32_t *l_1690 = &g_594;
                int32_t *l_1691 = &g_732;
                int32_t *l_1692 = (void*)0;
                int32_t *l_1693 = (void*)0;
                int32_t *l_1694 = &g_271.f0.f1;
                int32_t *l_1695 = &l_1574;
                int32_t *l_1696 = &l_1539.f1;
                int32_t *l_1697[7][2];
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1697[i][j] = &l_1582[0];
                }
                ++l_1700;
            }
            for (g_937 = 0; (g_937 >= 37); g_937 = safe_add_func_uint8_t_u_u(g_937, 4))
            { 
                uint32_t l_1720 = 0xFA6144ACL;
                uint16_t *l_1728[6][6] = {{&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0]},{&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0]},{&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0]},{&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0]},{&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0]},{&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0],&g_200[3][1][0]}};
                uint64_t *l_1744 = &l_1539.f0;
                union U1 *l_1776 = &g_194;
                int i, j;
                if ((p_6.f4 < (**g_1198)))
                { 
                    int32_t *l_1705 = &g_1023;
                    int32_t *l_1706 = &l_1573;
                    int32_t *l_1707 = &g_1023;
                    int32_t *l_1708 = &g_18.f1;
                    int32_t *l_1709[7][3];
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1709[i][j] = &l_1571;
                    }
                    --l_1710;
                    (*l_1707) ^= (l_1564 || (((void*)0 != &g_1066) <= ((*l_1687)--)));
                }
                else
                { 
                    int32_t *l_1715 = &g_18.f1;
                    int32_t *l_1716 = &l_1699;
                    int32_t *l_1717 = &l_1582[5];
                    int32_t *l_1718 = &g_1177[0][1][4];
                    int32_t *l_1719[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1719[i] = &g_264;
                    (*g_172) |= p_6.f4;
                    ++l_1720;
                }
                for (l_1577 = 0; (l_1577 != (-15)); l_1577 = safe_sub_func_uint8_t_u_u(l_1577, 3))
                { 
                    const uint16_t *l_1727 = &g_200[2][0][2];
                    (*g_172) |= (safe_lshift_func_int8_t_s_s(((l_1727 != l_1728[2][0]) || (safe_lshift_func_int8_t_s_s((l_1737 = (+(((((safe_mod_func_int32_t_s_s((-5L), (safe_lshift_func_int16_t_s_s(((**g_1198) = ((p_6 , (l_1736 = &g_135)) == &g_929)), (((***l_1685) = ((((1UL != p_3) , (-1L)) , p_5.f0) , 0x7AL)) , l_1577))))) | g_18.f0) == p_3) != l_1700) > l_1720))), 0))), l_1557.f0.f0));
                }
                for (g_733 = 0; (g_733 == (-24)); g_733--)
                { 
                    int32_t ****l_1751 = (void*)0;
                    int32_t ****l_1752 = &g_1441;
                    int32_t *l_1755 = &g_1177[0][0][4];
                    l_1698[4] ^= ((*l_1755) = (((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(0UL, (l_1539.f1 & ((255UL > (l_1557 , ((void*)0 != l_1744))) && (safe_rshift_func_uint8_t_u_s((((*g_172) = (safe_add_func_int32_t_s_s((((((safe_add_func_int16_t_s_s((((*l_1752) = g_1441) == g_1753[2]), (*g_627))) & p_6.f2) , l_1573) && l_1754) || l_1557.f0.f0), p_6.f0))) | 3UL), (*g_987))))))), 3)) && p_6.f0) & 0x63762BB9L));
                    (*g_172) |= (safe_add_func_uint64_t_u_u((((safe_div_func_int8_t_s_s(0L, (safe_sub_func_uint8_t_u_u((((((((safe_div_func_int32_t_s_s((l_50 > (safe_rshift_func_uint8_t_u_s(((*g_312) , ((-1L) >= (((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((p_6 , ((*g_510) = (safe_add_func_int32_t_s_s(((((p_5.f1 < (((*g_1010) , l_1774[3][5][0]) == (void*)0)) , l_1700) || 0L) > l_1775), g_974)))), 9L)), p_6.f0)) && l_1666) | 0xA9E3L))), p_4))), g_852)) , l_1577) < (*l_1755)) < l_1775) > p_5.f1) , l_1571) == 65535UL), 0x2FL)))) , l_1698[6]) > l_1666), p_6.f0));
                    (**l_1535) = l_1776;
                }
                if (p_5.f0)
                    break;
            }
            (*g_172) = ((((*l_1777) = &p_3) == (void*)0) > ((*g_987) > p_3));
            for (g_439 = 3; (g_439 < 32); g_439 = safe_add_func_uint8_t_u_u(g_439, 1))
            { 
                union U3 **l_1782 = &g_1010;
                int32_t **l_1784 = (void*)0;
                int32_t **l_1785[2];
                uint32_t *l_1790 = (void*)0;
                uint32_t *l_1791[5][3][1] = {{{(void*)0},{&g_789},{(void*)0}},{{&g_789},{(void*)0},{(void*)0}},{{(void*)0},{&g_789},{(void*)0}},{{&g_789},{(void*)0},{(void*)0}},{{(void*)0},{&g_789},{(void*)0}}};
                int8_t *****l_1796[1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1785[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_1796[i] = &l_1795;
                (*l_1782) = &g_19;
                l_1783 = l_1783;
                (*g_172) = (((safe_sub_func_int8_t_s_s((safe_div_func_int64_t_s_s(((p_6.f1 ^= (g_946 ^= 4294967295UL)) <= (l_1645.f0.f0 > (*g_987))), (+(l_1793 != (void*)0)))), (&g_1066 == (g_1797 = (l_1794[5] , l_1795))))) >= 0x9F05C8A7L) != l_1554);
            }
        }
        else
        { 
            uint32_t l_1802 = 0xCC098ABFL;
            (*g_172) &= (safe_unary_minus_func_int64_t_s(((*g_640) = ((p_6.f2 = (*l_1783)) == (((safe_rshift_func_uint16_t_u_s(((+(p_5 , 0xFB498E0F2E831595LL)) , (l_1802++)), 11)) && ((((safe_sub_func_int16_t_s_s((l_1645.f0.f1 = ((*g_510) &= (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u((p_3 , (((g_576 , &l_1795) == (((((void*)0 != l_1815) > l_1802) , (*l_1783)) , &l_1795)) != 1UL)), 3)) , (*g_640)), g_95)), 0UL)), (*l_1783))))), p_5.f0)) > (*l_1783)) == p_5.f0) && (*g_510))) ^ l_1553)))));
        }
        (*l_1783) = (g_750 <= (((*g_510) = (((*l_1783) >= ((*l_1783) != l_1818)) < ((*g_1797) != (*l_1795)))) == (safe_mul_func_int16_t_s_s((l_50 = 0L), g_957.f0))));
    }
    else
    { 
        int32_t *l_1821[3][1];
        uint32_t l_1822 = 4294967295UL;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1821[i][j] = &g_898.f1;
        }
        --l_1822;
    }
    return (*g_1010);
}



static int32_t  func_20(const uint16_t * p_21, union U3  p_22, int16_t  p_23, uint32_t  p_24)
{ 
    return p_22.f2;
}



static union U3  func_25(uint16_t * p_26, struct S0  p_27, uint16_t * p_28)
{ 
    int32_t *l_1528 = &g_19.f3.f1;
    int32_t *l_1529[4] = {&g_271.f0.f1,&g_271.f0.f1,&g_271.f0.f1,&g_271.f0.f1};
    uint64_t l_1530 = 0x00643C6475EDA492LL;
    int i;
    --l_1530;
    return (*g_1010);
}



static uint16_t * func_29(int32_t  p_30, uint16_t * p_31, union U1  p_32, struct S0  p_33)
{ 
    int32_t **l_1524[7] = {&g_592,&g_592,&g_592,&g_592,&g_592,&g_592,&g_592};
    int32_t *l_1525[4][3] = {{&g_271.f0.f1,&g_1177[0][0][4],&g_271.f0.f1},{&g_271.f0.f1,&g_1177[0][0][4],&g_271.f0.f1},{&g_271.f0.f1,&g_1177[0][0][4],&g_271.f0.f1},{&g_271.f0.f1,&g_1177[0][0][4],&g_271.f0.f1}};
    uint16_t *l_1526[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_1526[i] = &g_576;
    l_1525[2][1] = &p_30;
    (*g_172) ^= (-3L);
    return l_1526[0];
}



static int32_t  func_34(uint16_t * p_35, uint32_t  p_36, int32_t  p_37, uint16_t * p_38)
{ 
    uint16_t l_54 = 0x376AL;
    int32_t l_70 = 0xB385FAE1L;
    int32_t l_940 = (-6L);
    int32_t l_944[2][1];
    int32_t *l_978 = &g_594;
    int16_t **l_1008 = (void*)0;
    uint16_t l_1030[1][1][7] = {{{0x1BB2L,0x1BB2L,0x1BB2L,0x1BB2L,0x1BB2L,0x1BB2L,0x1BB2L}}};
    int8_t * const *l_1036 = (void*)0;
    int32_t *l_1069 = (void*)0;
    int32_t *l_1070 = (void*)0;
    int32_t *l_1071 = &l_940;
    int32_t *l_1072 = &g_264;
    int32_t *l_1073[5][6][7] = {{{&g_271.f0.f1,&g_18.f1,&l_944[1][0],&l_940,&l_940,&l_944[1][0],&g_18.f1},{&g_898.f1,&g_271.f0.f1,&l_944[1][0],&g_271.f0.f1,&l_940,&g_1023,(void*)0},{&l_944[1][0],&g_594,&g_271.f0.f1,&l_944[1][0],&g_732,&g_1023,&l_944[1][0]},{&l_944[1][0],&g_957.f1,&l_70,&g_271.f0.f1,&g_957.f1,(void*)0,&l_70},{&g_18.f1,&l_944[1][0],(void*)0,&l_940,&g_1023,&l_944[1][0],&g_957.f1},{&l_944[1][0],&g_732,&g_271.f0.f1,&g_1023,&g_18.f1,&l_940,&g_594}},{{&g_594,&g_271.f0.f1,&g_18.f1,&g_594,&g_594,(void*)0,&l_944[1][0]},{&g_594,&l_940,(void*)0,&g_1023,&g_733,&g_264,&g_1023},{&l_70,&g_594,&g_264,&l_944[1][0],&l_944[1][0],&l_944[1][0],&g_264},{&l_944[1][0],&l_944[1][0],&g_898.f1,&l_944[1][0],&g_732,&g_957.f1,(void*)0},{&g_594,(void*)0,&l_70,&g_271.f0.f1,&l_70,&g_264,&g_733},{&l_944[1][0],&l_944[1][0],&g_264,&l_70,&g_732,(void*)0,&l_944[1][0]}},{{&l_940,&l_940,&g_18.f1,(void*)0,&l_944[1][0],&g_732,&g_271.f0.f1},{&g_1023,(void*)0,&g_594,&g_271.f0.f1,&g_733,&l_70,&g_733},{&g_594,&l_944[1][0],&l_944[1][0],&l_944[1][0],&g_594,&g_594,(void*)0},{&g_732,&l_944[1][0],&g_594,&l_940,(void*)0,&l_70,&l_940},{&l_944[1][0],(void*)0,&l_70,&g_1023,&l_944[1][0],&l_944[1][0],&g_1023},{(void*)0,&l_940,(void*)0,&l_944[1][0],&g_733,(void*)0,&g_264}},{{&g_594,&l_944[1][0],&l_70,&g_594,&g_1023,&g_898.f1,&l_940},{&g_1023,(void*)0,(void*)0,&l_944[1][0],(void*)0,(void*)0,&g_732},{&g_733,&l_944[1][0],&l_940,&g_898.f1,&l_944[1][0],&l_944[1][0],&l_70},{&l_940,&g_594,(void*)0,&g_732,&g_1023,&l_70,&g_271.f0.f1},{&g_594,&l_940,&g_898.f1,&g_1023,&l_940,&g_594,&l_940},{(void*)0,&g_271.f0.f1,&g_898.f1,(void*)0,&g_594,&l_70,&l_940}},{{&g_733,&g_1023,(void*)0,&g_594,(void*)0,&g_732,(void*)0},{&g_594,&l_940,&l_940,&g_594,&g_594,(void*)0,&l_944[1][0]},{&l_944[1][0],&g_733,(void*)0,&g_264,&l_940,&g_264,&g_898.f1},{&g_733,&g_594,&l_70,&l_940,&l_944[1][0],&g_957.f1,&l_944[1][0]},{&l_944[1][0],(void*)0,(void*)0,&l_944[1][0],&g_264,&l_944[1][0],(void*)0},{&g_594,&g_732,&l_70,&l_940,&g_733,&g_264,&l_940}}};
    int16_t * const * const l_1125 = &g_510;
    int32_t *l_1126 = &l_940;
    struct S0 l_1128 = {0x397675F57D796411LL,0xDC53EF0DL};
    int64_t l_1140 = 0xB9071946A344409ALL;
    struct S0 **l_1159 = &g_400;
    union U3 l_1165 = {0x0D3EF919EA94E9A8LL};
    const union U1 *l_1212[3][1];
    uint64_t *l_1279[2][6] = {{&g_277[4][2][1],&g_277[4][2][1],&g_277[4][2][1],&g_277[4][2][1],&g_277[4][2][1],&g_277[4][2][1]},{&g_277[4][2][1],&g_277[4][2][1],&g_277[4][2][1],&g_277[4][2][1],&g_277[4][2][1],&g_277[4][2][1]}};
    uint32_t l_1330[3];
    int64_t l_1376[3][7] = {{0x3DDA3A7CFC29B2EBLL,0L,0x791185EBBED97184LL,0x791185EBBED97184LL,0L,0x3DDA3A7CFC29B2EBLL,0L},{0x6F7772912D95D3C1LL,0x3DDA3A7CFC29B2EBLL,0x3DDA3A7CFC29B2EBLL,0x791185EBBED97184LL,0x010B0C1B7EBBC507LL,0x791185EBBED97184LL,0x6F7772912D95D3C1LL},{0x3DDA3A7CFC29B2EBLL,0x3DDA3A7CFC29B2EBLL,0x6F7772912D95D3C1LL,0L,0x6F7772912D95D3C1LL,0x3DDA3A7CFC29B2EBLL,0x3DDA3A7CFC29B2EBLL}};
    const int16_t l_1401[3][6] = {{1L,(-1L),1L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-1L),1L,(-1L)}};
    uint64_t *l_1405 = &g_898.f0;
    int8_t ***l_1418 = &g_986[2];
    int32_t l_1446 = 0xA695851DL;
    union U2 l_1487 = {{0x91ADF06CA33E9896LL,-1L}};
    uint32_t l_1491[6][7][3] = {{{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL}},{{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL}},{{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL}},{{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL}},{{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL}},{{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL},{1UL,4294967292UL,4294967295UL},{4294967292UL,1UL,4294967295UL},{0UL,0UL,4294967295UL}}};
    uint8_t l_1517 = 0x4FL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_944[i][j] = (-2L);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1212[i][j] = &g_711;
    }
    for (i = 0; i < 3; i++)
        l_1330[i] = 0x42087A32L;
    l_54++;
    if ((*g_172))
    { 
        struct S0 l_1079 = {18446744073709551609UL,-6L};
        uint16_t **l_1085[5] = {&g_41,&g_41,&g_41,&g_41,&g_41};
        int8_t ***l_1111[3];
        int32_t *l_1112 = &l_70;
        int16_t *l_1122 = &g_595;
        int16_t ***l_1123 = (void*)0;
        int16_t ***l_1124 = &g_509;
        int i;
        for (i = 0; i < 3; i++)
            l_1111[i] = &g_986[1];
        (*g_400) = l_1079;
        for (g_271.f1 = 0; (g_271.f1 == 52); g_271.f1 = safe_add_func_uint32_t_u_u(g_271.f1, 8))
        { 
            int64_t l_1097 = 0xEBB41607F80A9C09LL;
            for (g_265 = (-7); (g_265 > 48); g_265 = safe_add_func_int8_t_s_s(g_265, 4))
            { 
                uint16_t **l_1086 = &g_41;
                int32_t l_1098 = 0xE3D23566L;
                int32_t l_1105[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1105[i] = 0xCE30E10CL;
                if ((l_1085[1] != l_1086))
                { 
                    return (*g_172);
                }
                else
                { 
                    uint8_t *l_1101 = (void*)0;
                    uint8_t *l_1102 = &g_205;
                    int32_t l_1108 = 0x061C6B35L;
                    int32_t **l_1113[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1113[i] = (void*)0;
                    (*l_1071) = (0UL == (((safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((*l_1071), ((safe_rshift_func_int8_t_s_s((l_1098 = l_1097), 4)) && (safe_mul_func_uint8_t_u_u((++(*l_1102)), (8L || ((void*)0 == &l_1098))))))), 1UL)) | 0x49D7L), 0x1C25L)), l_1105[0])) , p_36) < l_1105[2]));
                    (*l_1071) &= (safe_sub_func_int16_t_s_s(l_1108, (((void*)0 == &g_732) , ((((7L != (((l_1098 > (((safe_sub_func_uint32_t_u_u((p_36 > ((*l_1102) = (l_1111[1] == &g_986[2]))), p_36)) >= l_1105[0]) < 18446744073709551615UL)) || 0L) && l_1079.f0)) <= 0UL) | (*g_627)) < l_1105[0]))));
                    g_592 = l_1112;
                    return p_37;
                }
            }
        }
        (*l_1072) &= ((*l_978) , (safe_add_func_int64_t_s_s(7L, ((*g_640) ^= ((safe_add_func_int8_t_s_s((*g_987), (((safe_lshift_func_uint8_t_u_s(0UL, 1)) & (((*l_1124) = ((safe_add_func_uint16_t_u_u((p_37 != (((((p_38 != l_1122) < (*l_1112)) , l_1036) != (void*)0) > (*g_172))), (*g_510))) , &l_1122)) != l_1125)) & 0xE499L))) >= 1L)))));
    }
    else
    { 
        int32_t **l_1127 = &l_1071;
        (*l_1127) = l_1126;
        return (*g_172);
    }
    return (*l_978);
}



static uint16_t * func_83(uint16_t ** p_84)
{ 
    int32_t l_86[5][7][3] = {{{0xEBEE99B4L,0xEB7CCD03L,0x40BBFB6FL},{0xD2CC01E3L,0xD2CC01E3L,0x22F50FADL},{0xEB7CCD03L,0xEBEE99B4L,0L},{0x81485852L,0xD2CC01E3L,0x81485852L},{0xCF818A8DL,0xEB7CCD03L,0x30D26BC8L},{1L,0x81485852L,0x81485852L},{0x30D26BC8L,0xCF818A8DL,0L}},{{0xF7A37477L,1L,0x22F50FADL},{0x30D26BC8L,0x30D26BC8L,0x40BBFB6FL},{1L,0xF7A37477L,1L},{0xCF818A8DL,5L,0xEBEE99B4L},{0xF7A37477L,0x81485852L,0L},{0xCF818A8DL,0xEBEE99B4L,0xEBEE99B4L},{0L,0xF7A37477L,0x22F50FADL}},{{0L,0xCF818A8DL,0x30D26BC8L},{0L,0L,0xD2CC01E3L},{0xCF818A8DL,0L,0x40BBFB6FL},{0xF7A37477L,0L,0xF7A37477L},{0xEBEE99B4L,0xCF818A8DL,5L},{0x81485852L,0xF7A37477L,0xF7A37477L},{5L,0xEBEE99B4L,0x40BBFB6FL}},{{1L,0x81485852L,0xD2CC01E3L},{5L,5L,0x30D26BC8L},{0x81485852L,1L,0x22F50FADL},{0xEBEE99B4L,5L,0xEBEE99B4L},{0xF7A37477L,0x81485852L,0L},{0xCF818A8DL,0xEBEE99B4L,0xEBEE99B4L},{0L,0xF7A37477L,0x22F50FADL}},{{0L,0xCF818A8DL,0x30D26BC8L},{0L,0L,0xD2CC01E3L},{0xCF818A8DL,0L,0x40BBFB6FL},{0xF7A37477L,0L,0xF7A37477L},{0xEBEE99B4L,0xCF818A8DL,5L},{0x81485852L,0xF7A37477L,0xF7A37477L},{5L,0xEBEE99B4L,0x40BBFB6FL}}};
    int32_t *l_87 = &g_18.f1;
    int32_t *l_88 = (void*)0;
    int32_t *l_89 = &g_18.f1;
    int32_t *l_90 = (void*)0;
    int32_t *l_91 = &g_18.f1;
    int32_t l_92[2];
    int32_t *l_93 = (void*)0;
    int32_t *l_94[4] = {&l_92[0],&l_92[0],&l_92[0],&l_92[0]};
    const int64_t l_828 = 0xD69EB7AC2D288661LL;
    struct S0 * const *l_837 = &g_400;
    struct S0 * const **l_836 = &l_837;
    struct S0 * const ***l_835 = &l_836;
    struct S0 ****l_838[3][2][3] = {{{&g_581[0],&g_581[0],(void*)0},{(void*)0,&g_581[1],(void*)0}},{{&g_581[1],(void*)0,(void*)0},{&g_581[0],&g_581[0],(void*)0}},{{(void*)0,&g_581[1],(void*)0},{&g_581[1],(void*)0,(void*)0}}};
    int16_t ***l_874 = &g_509;
    int64_t **l_877 = &g_640;
    struct S0 l_920 = {0x968DD32E1B5E50F3LL,-1L};
    struct S0 **l_921 = &g_400;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_92[i] = 1L;
    ++g_96;
    g_99++;
    if ((safe_lshift_func_int8_t_s_u((*l_87), 7)))
    { 
        uint8_t l_106 = 0x3DL;
        uint32_t l_819 = 4294967295UL;
        int32_t l_850 = 1L;
        int32_t l_851 = 0x1EA275CDL;
        int8_t *l_863 = &g_749;
        int32_t l_864 = 1L;
        int32_t l_865 = 1L;
        int32_t l_866 = (-1L);
        for (g_7 = 11; (g_7 > 47); g_7++)
        { 
            int8_t l_809 = 8L;
            int32_t l_845 = 0x3FAFF0B5L;
            if (l_106)
                break;
            for (g_52 = 0; (g_52 != (-9)); g_52--)
            { 
                uint32_t l_110 = 0UL;
                uint16_t l_113 = 0UL;
                struct S0 l_847[4][3][7] = {{{{1UL,0x01FF5C56L},{0x78D5BACB609DF30BLL,0xF77DB805L},{0UL,1L},{0x9F46AE2ECEBB2338LL,-2L},{18446744073709551610UL,0x18AD3342L},{1UL,1L},{0x465E5A71D9EB03D1LL,-1L}},{{0x6EF1E140BF33E3F2LL,-7L},{18446744073709551612UL,0xDC9DA3C3L},{2UL,0x23B7ECBDL},{0x1CC0899B5CB683E8LL,3L},{2UL,0x23B7ECBDL},{18446744073709551612UL,0xDC9DA3C3L},{0x6EF1E140BF33E3F2LL,-7L}},{{0x6EF1E140BF33E3F2LL,-7L},{0UL,1L},{18446744073709551611UL,0x9ED2BEEEL},{0x78D5BACB609DF30BLL,0xF77DB805L},{18446744073709551612UL,0xDC9DA3C3L},{1UL,0x9B41EA69L},{2UL,0x23B7ECBDL}}},{{{1UL,0x01FF5C56L},{18446744073709551615UL,2L},{0x9F46AE2ECEBB2338LL,-2L},{0x465E5A71D9EB03D1LL,-1L},{0x8D6F4D54F8D88BC0LL,0xD367C810L},{0xD0F04F4222EB44C8LL,0xF5EA6A72L},{18446744073709551615UL,2L}},{{0x8D6F4D54F8D88BC0LL,0xD367C810L},{18446744073709551610UL,0x18AD3342L},{18446744073709551611UL,0x9ED2BEEEL},{18446744073709551615UL,0xBE9FC216L},{18446744073709551615UL,0x53606760L},{0x8D6F4D54F8D88BC0LL,0xD367C810L},{18446744073709551615UL,0x53606760L}},{{0x9F46AE2ECEBB2338LL,-2L},{2UL,0x23B7ECBDL},{2UL,0x23B7ECBDL},{0x9F46AE2ECEBB2338LL,-2L},{18446744073709551615UL,0x53606760L},{0xC49D0F23A8921C41LL,0xFDDD6E5BL},{0x78D5BACB609DF30BLL,0xF77DB805L}}},{{{0x5CC02E4BD8BA2FB9LL,0xC8F7758FL},{18446744073709551612UL,0xDC9DA3C3L},{0UL,1L},{0UL,0L},{0x8D6F4D54F8D88BC0LL,0xD367C810L},{1UL,0x00E0ACA0L},{0x6EF1E140BF33E3F2LL,-7L}},{{1UL,0x00E0ACA0L},{0x8D6F4D54F8D88BC0LL,0xD367C810L},{0UL,0L},{0UL,1L},{18446744073709551612UL,0xDC9DA3C3L},{0x5CC02E4BD8BA2FB9LL,0xC8F7758FL},{0x78D5BACB609DF30BLL,0xF77DB805L}},{{0xC49D0F23A8921C41LL,0xFDDD6E5BL},{18446744073709551615UL,0x53606760L},{0x9F46AE2ECEBB2338LL,-2L},{2UL,0x23B7ECBDL},{2UL,0x23B7ECBDL},{0x9F46AE2ECEBB2338LL,-2L},{18446744073709551615UL,0x53606760L}}},{{{0x8D6F4D54F8D88BC0LL,0xD367C810L},{18446744073709551615UL,0x53606760L},{18446744073709551615UL,0xBE9FC216L},{18446744073709551611UL,0x9ED2BEEEL},{18446744073709551610UL,0x18AD3342L},{0x8D6F4D54F8D88BC0LL,0xD367C810L},{18446744073709551615UL,2L}},{{0xD0F04F4222EB44C8LL,0xF5EA6A72L},{0x8D6F4D54F8D88BC0LL,0xD367C810L},{0x465E5A71D9EB03D1LL,-1L},{0x9F46AE2ECEBB2338LL,-2L},{18446744073709551615UL,2L},{1UL,0x01FF5C56L},{2UL,0x23B7ECBDL}},{{1UL,0x9B41EA69L},{18446744073709551612UL,0xDC9DA3C3L},{0x78D5BACB609DF30BLL,0xF77DB805L},{18446744073709551611UL,0x9ED2BEEEL},{0UL,1L},{0x6EF1E140BF33E3F2LL,-7L},{0x6EF1E140BF33E3F2LL,-7L}}}};
                int i, j, k;
                if (((*g_172) = ((~((l_110 , (safe_div_func_int64_t_s_s(l_113, (-3L)))) > 0xE8FFL)) | ((safe_mul_func_int16_t_s_s((-8L), func_116(&g_96, &l_92[1], &g_12, l_113, &g_12))) && l_809))))
                { 
                    int16_t l_814 = 0L;
                    int32_t **l_826 = &g_172;
                    int32_t ***l_825 = &l_826;
                    uint8_t *l_827 = &g_205;
                    struct S0 *****l_839 = &l_838[1][0][0];
                    uint8_t *l_844[1][1][3];
                    int8_t *l_846[3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_844[i][j][k] = &l_106;
                        }
                    }
                    for (i = 0; i < 3; i++)
                        l_846[i] = &l_809;
                    (*g_592) |= ((safe_mod_func_int16_t_s_s(((l_106 != (((*l_87) == ((**g_509) , 0UL)) ^ (&g_509 != (void*)0))) >= l_814), (*g_510))) == g_593);
                    (**l_826) = (((((-4L) | (*l_91)) < g_203) <= ((l_110 ^ (safe_lshift_func_int8_t_s_u(((((*g_592) = (((*l_827) = ((safe_rshift_func_int8_t_s_u(l_819, (0xE5E99B49L ^ (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s(((void*)0 == l_825))), 6)), 1UL))))) & 0x53D2BFFC8C4E3135LL)) | 249UL)) > l_828) != 1UL), 3))) || (**g_509))) > g_264);
                    l_847[2][0][4] = (((((((*l_89) , ((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((g_200[3][1][0] || (safe_mul_func_uint8_t_u_u((((**g_509) , l_835) == ((*l_839) = l_838[1][0][2])), ((*l_827) = g_264)))), (safe_mod_func_int8_t_s_s((g_69[1][2] |= (safe_add_func_uint8_t_u_u((l_845 = 0x0FL), l_819))), l_819)))), l_809)) <= 0x7E3CL)) && l_809) | 249UL) != l_106) || 0xCAL) , (*g_400));
                    return &g_200[3][1][0];
                }
                else
                { 
                    (*g_592) ^= (safe_lshift_func_uint8_t_u_u((l_809 != (**g_509)), 2));
                }
            }
        }
        ++g_854;
        (*g_592) &= ((*g_172) & ((g_857 = &g_581[0]) != (((0L >= g_593) > (((safe_rshift_func_uint16_t_u_s(0x7B0CL, (((*l_863) &= ((l_850 = (safe_div_func_int16_t_s_s(0x194CL, 0x3782L))) > g_732)) >= 0x46L))) >= 1UL) == l_851)) , (void*)0)));
        --g_867;
        (*g_592) ^= (safe_add_func_int32_t_s_s((-1L), ((*l_91) != ((void*)0 != l_874))));
    }
    else
    { 
        int32_t l_887 = 0xBD29A312L;
        int64_t l_892 = (-1L);
        int8_t *l_913 = &g_69[4][3];
        for (g_204 = 0; (g_204 <= 4); g_204 += 1)
        { 
            int16_t l_888 = 0x28C2L;
            int32_t l_891 = 0L;
            uint16_t *l_903 = &g_576;
            uint16_t *l_906[6];
            struct S0 ****l_911 = &g_581[0];
            uint32_t *l_912 = &g_789;
            int8_t *l_914 = &g_69[2][1];
            int i;
            for (i = 0; i < 6; i++)
                l_906[i] = &g_96;
            for (g_558 = 0; (g_558 <= 2); g_558 += 1)
            { 
                const uint8_t l_889 = 250UL;
                struct S0 l_897[6] = {{18446744073709551615UL,1L},{18446744073709551615UL,1L},{1UL,-1L},{18446744073709551615UL,1L},{18446744073709551615UL,1L},{1UL,-1L}};
                int i;
                for (g_18.f1 = 0; (g_18.f1 <= 0); g_18.f1 += 1)
                { 
                    uint32_t *l_890 = &g_71;
                    int32_t l_893 = (-4L);
                    int i, j, k;
                    l_893 ^= ((safe_add_func_int64_t_s_s(((l_877 != &g_640) & ((0x54L && ((safe_unary_minus_func_uint32_t_u(((~((safe_lshift_func_int16_t_s_s(l_86[g_18.f1][g_204][g_558], 6)) || (((*g_592) = (safe_rshift_func_uint16_t_u_u(((((*l_890) = ((safe_unary_minus_func_uint64_t_u((safe_div_func_int32_t_s_s(l_887, l_888)))) > l_889)) || g_19.f2) == 0xC8L), g_439))) ^ l_891))) != l_892))) & g_190)) | 0UL)), 0x58008AECE24017A8LL)) ^ l_86[g_18.f1][g_204][g_558]);
                }
                for (g_190 = 0; (g_190 <= 0); g_190 += 1)
                { 
                    uint32_t l_894 = 0xF3334007L;
                    l_894++;
                }
                for (g_52 = 0; (g_52 <= 0); g_52 += 1)
                { 
                    int i;
                    g_898 = l_897[0];
                    if (l_889)
                        continue;
                }
            }
            g_919 = (((safe_sub_func_uint16_t_u_u(((*l_903)++), (g_200[0][1][1]--))) || ((&g_858 != l_911) < ((l_914 = (((*l_912) &= 5UL) , l_913)) == l_913))) >= (safe_add_func_uint8_t_u_u(0x07L, (safe_div_func_uint64_t_u_u(g_52, g_558)))));
            for (g_576 = 0; (g_576 <= 0); g_576 += 1)
            { 
                return (*p_84);
            }
        }
    }
    l_920 = (***l_836);
    (*l_921) = (**l_836);
    return &g_200[2][0][1];
}



static int16_t  func_116(uint16_t * p_117, int32_t * p_118, uint16_t * p_119, uint32_t  p_120, uint16_t * p_121)
{ 
    struct S0 l_122 = {0x86B95FE78F14D573LL,0xC63812DDL};
    struct S0 *l_123 = &l_122;
    uint32_t l_133[7] = {0x3BABBD54L,0x3BABBD54L,0x3BABBD54L,0x3BABBD54L,0x3BABBD54L,0x3BABBD54L,0x3BABBD54L};
    int32_t *l_134[2][4][3] = {{{&l_122.f1,&g_18.f1,&g_18.f1},{(void*)0,(void*)0,(void*)0},{&l_122.f1,&g_18.f1,&g_18.f1},{(void*)0,(void*)0,(void*)0}},{{&l_122.f1,&g_18.f1,&g_18.f1},{(void*)0,(void*)0,(void*)0},{&l_122.f1,&g_18.f1,&g_18.f1},{(void*)0,(void*)0,(void*)0}}};
    union U1 *l_193 = &g_194;
    uint8_t *l_278 = &g_7;
    int32_t **l_279 = &l_134[1][3][0];
    int16_t *l_298 = &g_263;
    const union U3 l_367[4] = {{0x0CF6ABFE5755B596LL},{0x0CF6ABFE5755B596LL},{0x0CF6ABFE5755B596LL},{0x0CF6ABFE5755B596LL}};
    uint32_t l_388 = 0x13720E50L;
    const int16_t *l_397 = &g_263;
    uint32_t l_477[1][4][3] = {{{0UL,0UL,0UL},{0x95F22F0BL,0x5C44C4A7L,0x95F22F0BL},{0UL,0UL,0UL},{0x95F22F0BL,0x5C44C4A7L,0x95F22F0BL}}};
    uint16_t l_491 = 0UL;
    struct S0 ***l_537 = &g_399[2][1][1];
    uint32_t l_605[6][4][2] = {{{0xA19177B9L,1UL},{1UL,6UL},{1UL,1UL},{0xA19177B9L,1UL}},{{1UL,0xA19177B9L},{1UL,1UL},{0xA19177B9L,1UL},{1UL,6UL}},{{1UL,1UL},{0xA19177B9L,1UL},{1UL,0xA19177B9L},{1UL,1UL}},{{0xA19177B9L,1UL},{1UL,6UL},{1UL,1UL},{0xA19177B9L,1UL}},{{1UL,0xA19177B9L},{1UL,1UL},{0xA19177B9L,1UL},{1UL,6UL}},{{1UL,1UL},{0xA19177B9L,1UL},{1UL,0xA19177B9L},{1UL,1UL}}};
    int64_t *l_639 = (void*)0;
    const union U2 l_725 = {{18446744073709551611UL,0L}};
    int8_t l_730 = (-1L);
    uint32_t l_757 = 18446744073709551606UL;
    union U1 ****l_774[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_774[i] = &g_772;
    (*l_123) = l_122;
    (*l_123) = (*l_123);
    return (*g_510);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    transparent_crc(g_19.f2, "g_19.f2", print_hash_value);
    transparent_crc(g_19.f4, "g_19.f4", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_69[i][j], "g_69[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_194.f0, "g_194.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_200[i][j][k], "g_200[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_277[i][j][k], "g_277[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_363[i], "g_363[i]", print_hash_value);

    }
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_711.f0, "g_711.f0", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_751, "g_751", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    transparent_crc(g_867, "g_867", print_hash_value);
    transparent_crc(g_898.f0, "g_898.f0", print_hash_value);
    transparent_crc(g_898.f1, "g_898.f1", print_hash_value);
    transparent_crc(g_919, "g_919", print_hash_value);
    transparent_crc(g_929, "g_929", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_957.f0, "g_957.f0", print_hash_value);
    transparent_crc(g_957.f1, "g_957.f1", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    transparent_crc(g_1023, "g_1023", print_hash_value);
    transparent_crc(g_1024, "g_1024", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1075, "g_1075", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1177[i][j][k], "g_1177[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1288, "g_1288", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1435[i], "g_1435[i]", print_hash_value);

    }
    transparent_crc(g_1443, "g_1443", print_hash_value);
    transparent_crc(g_1779, "g_1779", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
