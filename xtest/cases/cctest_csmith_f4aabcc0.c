// SPDX-License-Identifier: MIT
// cctest_csmith_f4aabcc0.c --- cctest case csmith_f4aabcc0 (csmith seed 4104830144)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x899ed12 */

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

// Options:   -s 4104830144 -o /tmp/csmith_gen_38l_iv0m/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   const int8_t  f1;
   uint16_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint64_t  f0;
   uint8_t  f1;
   int16_t  f2;
};
#pragma pack(pop)

union U2 {
   int16_t  f0;
   int16_t  f1;
   struct S1  f2;
};

union U3 {
   struct S0  f0;
   uint16_t  f1;
   uint8_t  f2;
   int32_t  f3;
};


static int32_t g_2 = 0L;
static int16_t g_7 = 0xB58EL;
static uint16_t g_23 = 6UL;
static int32_t g_40 = 0xD0C653DDL;
static int32_t g_72 = 0x172C66C3L;
static uint64_t g_89[2][4][5] = {{{0x9E501E45A2DC96F0LL,18446744073709551612UL,0UL,0x7794FBAEB33E7469LL,0UL},{0x7794FBAEB33E7469LL,0x7794FBAEB33E7469LL,0x5EFCBABA1048D1DFLL,0x66F6C633F4C626C4LL,18446744073709551613UL},{18446744073709551615UL,0xE2C69141744B85C5LL,0x5EFCBABA1048D1DFLL,4UL,0x9E501E45A2DC96F0LL},{5UL,0x5EFCBABA1048D1DFLL,0UL,0x5EFCBABA1048D1DFLL,5UL}},{{0x66F6C633F4C626C4LL,0xE2C69141744B85C5LL,18446744073709551613UL,5UL,0x7794FBAEB33E7469LL},{0x66F6C633F4C626C4LL,0x7794FBAEB33E7469LL,0x9E501E45A2DC96F0LL,0xB7A8BFC0225587BBLL,0xB7A8BFC0225587BBLL},{5UL,18446744073709551612UL,5UL,0xE2C69141744B85C5LL,0x7794FBAEB33E7469LL},{18446744073709551615UL,0xB7A8BFC0225587BBLL,0x7794FBAEB33E7469LL,0xE2C69141744B85C5LL,5UL}}};
static union U2 g_94[5][1] = {{{0xEEA4L}},{{0x4FC3L}},{{0xEEA4L}},{{0x4FC3L}},{{0xEEA4L}}};
static uint16_t g_95 = 65535UL;
static int16_t g_111[1][4][4] = {{{0L,0x422BL,(-1L),0L},{(-9L),0x422BL,0x422BL,(-9L)},{0x422BL,(-9L),(-3L),0xDA81L},{0x422BL,(-3L),0x422BL,(-1L)}}};
static uint32_t g_116 = 5UL;
static uint32_t g_118[1] = {0UL};
static uint8_t g_136[3] = {252UL,252UL,252UL};
static uint64_t g_181[3][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
static uint16_t g_206[3] = {0xABF4L,0xABF4L,0xABF4L};
static uint32_t g_214 = 0xF90CA241L;
static union U3 g_217 = {{-4L,0L,0UL}};
static int32_t g_257 = 0xB3D71B04L;
static uint16_t g_270 = 0xFA56L;
static struct S0 g_286 = {0xC29E29881E04204ALL,0x63L,0xFF1DL};
static int16_t g_289 = (-5L);
static uint32_t g_290 = 1UL;
static uint16_t g_339[3][3] = {{2UL,0UL,0UL},{2UL,0UL,0UL},{2UL,0UL,0UL}};



static uint32_t  func_1(void);
static uint16_t  func_13(uint8_t  p_14);
static int8_t  func_27(int32_t  p_28, int32_t  p_29);
static struct S1  func_32(int32_t  p_33, uint32_t  p_34);




static uint32_t  func_1(void)
{ 
    int16_t l_12 = (-10L);
    int32_t l_307 = 0xDD864097L;
    int32_t l_323 = (-1L);
    uint32_t l_329 = 0x0D6846D4L;
    for (g_2 = 12; (g_2 >= 1); --g_2)
    { 
        int64_t l_5[2];
        int32_t l_6 = 0x18E418A5L;
        int i;
        for (i = 0; i < 2; i++)
            l_5[i] = 0x7DFE4D9EDBDA7FE6LL;
        l_6 = l_5[1];
        g_7 = (-1L);
    }
    l_307 ^= (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_290, ((g_206[1] & ((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((l_12 , (safe_sub_func_int16_t_s_s(((func_32(l_12, g_286.f2) , 0xD5E941047791FE6ALL) == g_286.f2), g_206[0]))), 0xC6ECL)), l_12)), l_12)) , (-5L))) , g_89[0][3][3]))), l_12)), l_12)), 0x442AE9B445DA4C04LL));
    if (l_12)
    { 
        for (g_217.f2 = 15; (g_217.f2 > 11); g_217.f2 = safe_sub_func_int16_t_s_s(g_217.f2, 2))
        { 
            uint8_t l_322 = 0xB9L;
            for (g_2 = 7; (g_2 > (-27)); g_2 = safe_sub_func_int32_t_s_s(g_2, 2))
            { 
                l_323 |= ((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((g_95 != 247UL) || (g_206[1] < (((safe_sub_func_uint16_t_u_u(g_136[1], g_95)) | l_322) ^ (-7L)))), 6)), 7)) , 0L), l_307)), g_286.f2)) && g_23);
            }
        }
    }
    else
    { 
        uint32_t l_335 = 3UL;
        int32_t l_342 = 1L;
        if ((!((safe_lshift_func_int16_t_s_s(l_12, 12)) <= (safe_sub_func_uint16_t_u_u(((l_329 = g_94[0][0].f0) , ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((g_23 != g_206[1]) | g_111[0][3][1]), 15)), g_181[1][3])) < l_12)), g_23)))))
        { 
            uint16_t l_334 = 0x29D2L;
            return l_334;
        }
        else
        { 
            l_335 = l_323;
            for (g_217.f2 = 0; (g_217.f2 < 22); g_217.f2++)
            { 
                int32_t l_338 = 3L;
                g_339[1][1]--;
                if (g_40)
                    break;
                l_342 ^= ((g_72 && (g_136[1] | ((0UL < 4294967294UL) ^ 0x924317F4E93B77E5LL))) > 5UL);
            }
        }
    }
    return g_339[0][0];
}



static uint16_t  func_13(uint8_t  p_14)
{ 
    int32_t l_24 = 0xCFF15CC7L;
    int32_t l_271 = (-2L);
    l_271 = (((safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(p_14, (l_24 ^= (g_23 = 0x706B3799L)))) > (safe_div_func_int8_t_s_s((-6L), (g_270 = func_27(g_7, g_7))))), p_14)), l_271)) || g_111[0][3][1]), 0x358A6C8DL)) & 0L) == g_217.f0.f2);
    for (g_217.f2 = 0; (g_217.f2 <= 2); g_217.f2 += 1)
    { 
        int32_t l_287[3][2][5] = {{{1L,1L,1L,1L,1L},{0L,0L,(-1L),(-1L),0L}},{{0xC702A884L,1L,0xC702A884L,1L,0xC702A884L},{0L,(-1L),(-1L),0L,0L}},{{1L,1L,1L,1L,1L},{0L,0L,(-1L),(-1L),0L}}};
        const union U3 l_288 = {{0x183994F5809B3B63LL,0x6EL,0x2BDFL}};
        int i, j, k;
        g_40 = (safe_rshift_func_int8_t_s_u((g_289 = ((safe_mul_func_uint16_t_u_u(g_206[g_217.f2], (((l_287[2][1][3] = (safe_sub_func_int16_t_s_s(g_181[0][1], (safe_div_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_257, ((((g_286 , 0x0395L) || g_181[1][3]) && 0L) | g_206[2]))), 0L)), 0x0BL)), g_181[1][3]))))) , l_288) , p_14))) ^ 0x6643B3FEL)), 7));
        return l_288.f0.f1;
    }
    return p_14;
}



static int8_t  func_27(int32_t  p_28, int32_t  p_29)
{ 
    uint32_t l_35 = 0xF81606DCL;
    int32_t l_203 = 0x1445D630L;
    struct S0 l_228 = {-1L,3L,0x8159L};
    struct S1 l_240 = {0x4F4A132B8B985607LL,0xF4L,0L};
    int32_t l_253 = (-8L);
    int32_t l_254 = (-1L);
    int32_t l_255 = 1L;
    uint8_t l_269 = 0xD1L;
    l_203 = (safe_add_func_int32_t_s_s((((p_28 > (((func_32(l_35, p_28) , p_28) > g_94[0][0].f1) && 0xE292L)) == p_28) ^ l_35), g_72));
    for (g_95 = (-8); (g_95 <= 26); g_95 = safe_add_func_uint64_t_u_u(g_95, 9))
    { 
        uint32_t l_212 = 0xFA5D5B2DL;
        int32_t l_213[4] = {0x4A4C857AL,0x4A4C857AL,0x4A4C857AL,0x4A4C857AL};
        int32_t l_251 = 0x1EA467D7L;
        int i;
        for (p_28 = 0; (p_28 <= 2); p_28 += 1)
        { 
            int32_t l_209 = 0xD330B072L;
            int i, j;
            for (g_72 = 0; (g_72 <= 2); g_72 += 1)
            { 
                ++g_206[1];
            }
            l_209 = (0L >= g_181[p_28][p_28]);
            for (g_116 = 0; (g_116 <= 2); g_116 += 1)
            { 
                g_40 = (l_212 & (4294967289UL < l_212));
                --g_214;
                g_40 ^= (g_217 , l_203);
            }
        }
        if ((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((l_203 = l_203), (!(((safe_unary_minus_func_uint16_t_u((safe_div_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_s((l_228 , (((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(p_29, (safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((l_228.f1 ^ 254UL))), g_214)), l_228.f2)))), l_213[1])), g_116)) , g_118[0]) , l_213[2])), g_111[0][3][1])) , l_240) , 0L) ^ g_217.f0.f2), p_29)))) > l_240.f0) >= p_29)))) == p_28), p_29)))
        { 
            uint32_t l_241 = 0xD2B076EBL;
            const union U2 l_243[5][3] = {{{0L},{0x9042L},{0L}},{{3L},{-3L},{3L}},{{0L},{0x9042L},{0L}},{{3L},{-3L},{3L}},{{0L},{0x9042L},{0L}}};
            int16_t l_252 = 0L;
            int32_t l_256 = (-4L);
            int i, j;
            p_28 ^= (l_241 || ((0x2F3A6FA7AC4E5C6BLL || ((+(l_243[1][1] , (1UL > p_29))) > 0x8050L)) , 3UL));
            for (l_228.f2 = 0; (l_228.f2 >= 41); l_228.f2 = safe_add_func_uint16_t_u_u(l_228.f2, 6))
            { 
                uint16_t l_258[4] = {0xC543L,0xC543L,0xC543L,0xC543L};
                int i;
                p_29 &= ((-9L) <= 0x8342FEDEL);
                l_251 &= (g_40 |= ((!(l_243[1][1].f1 , (safe_sub_func_int8_t_s_s((g_95 && (((safe_rshift_func_uint8_t_u_u(p_29, 4)) != g_72) >= g_181[1][3])), l_213[1])))) || 0xA0L));
                --l_258[2];
            }
        }
        else
        { 
            g_40 = (safe_sub_func_uint32_t_u_u((0xDBL <= l_212), (l_213[1] = (((safe_rshift_func_int8_t_s_u(l_240.f1, p_29)) > 0x7185L) & 9UL))));
            p_28 &= (g_89[0][3][2] , ((safe_lshift_func_int8_t_s_u((l_213[1] = ((safe_sub_func_uint64_t_u_u(l_269, (g_95 != (-1L)))) | p_29)), g_72)) & g_111[0][0][3]));
        }
    }
    return p_28;
}



static struct S1  func_32(int32_t  p_33, uint32_t  p_34)
{ 
    uint32_t l_52 = 0x7820EAADL;
    uint32_t l_71 = 6UL;
    int32_t l_73 = (-1L);
    int32_t l_83 = 0L;
    uint32_t l_87 = 0x65C771C7L;
    int32_t l_88 = 0x9A8392DDL;
    struct S1 l_138[1][2][5] = {{{{18446744073709551614UL,0x8CL,0x9DD4L},{18446744073709551614UL,0x8CL,0x9DD4L},{18446744073709551611UL,255UL,1L},{18446744073709551614UL,0x8CL,0x9DD4L},{18446744073709551614UL,0x8CL,0x9DD4L}},{{18446744073709551615UL,0xDEL,0L},{18446744073709551614UL,0x8CL,0x9DD4L},{18446744073709551615UL,0xDEL,0L},{18446744073709551615UL,0xDEL,0L},{18446744073709551614UL,0x8CL,0x9DD4L}}}};
    int i, j, k;
    for (p_34 = (-6); (p_34 < 50); p_34 = safe_add_func_int64_t_s_s(p_34, 6))
    { 
        uint16_t l_46 = 65535UL;
        int32_t l_53 = 4L;
        for (p_33 = 24; (p_33 <= (-8)); p_33 = safe_sub_func_uint32_t_u_u(p_33, 7))
        { 
            union U3 l_51 = {{0xE7DFE98D7E942FAFLL,0xCEL,0x2CFBL}};
            for (g_40 = (-20); (g_40 <= (-26)); --g_40)
            { 
                uint64_t l_70 = 18446744073709551613UL;
                l_53 = (safe_rshift_func_int16_t_s_s(((p_34 >= (!((l_46 && (((((0xB19F88DD0BB265D6LL == (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((l_51 , g_40), g_7)), g_2))) > 0x31D5762CC684CA67LL) != p_33) <= 0UL) | l_52)) > l_52))) & g_2), p_34));
                l_73 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(l_53, ((safe_rshift_func_int8_t_s_u(g_40, 0)) < ((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((l_71 = (((safe_sub_func_uint64_t_u_u((((0xC8B2L > (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_7, l_70)), 0xFEL))) , 0x06L) >= l_53), 0xD5C01CF56E035D6DLL)) == l_52) < 1UL)), 0x7802L)), p_34)) == g_40)))), g_72));
                l_73 = ((safe_rshift_func_uint8_t_u_s(g_40, 4)) || ((safe_div_func_uint8_t_u_u(((((safe_unary_minus_func_int64_t_s((safe_sub_func_int16_t_s_s((l_70 != ((0x62C7DCB2139E6D59LL & (0x62L | g_40)) == p_34)), p_33)))) == l_51.f0.f1) <= 0xCCL) < 0x221BL), 5L)) ^ p_33));
            }
        }
        for (l_73 = (-20); (l_73 < (-19)); ++l_73)
        { 
            int8_t l_86 = 0x70L;
            l_53 &= (l_83 ^= p_34);
            l_88 = ((((l_83 &= (((((safe_lshift_func_uint8_t_u_s((p_33 , (l_53 = p_33)), (((((l_86 &= g_72) ^ l_52) , 0x9FFB2EF76CAF4455LL) , l_46) < p_33))) && p_33) >= 1L) & p_33) && 0xE2C5435112828081LL)) > p_34) || g_40) & l_87);
        }
    }
    for (p_34 = 0; (p_34 <= 1); p_34 += 1)
    { 
        int16_t l_110 = 0x6363L;
        int32_t l_137 = 0L;
        uint64_t l_139 = 0x6C016F7827581F2DLL;
        for (p_33 = 1; (p_33 >= 0); p_33 -= 1)
        { 
            uint8_t l_117 = 0x4AL;
            union U3 l_125 = {{-2L,0L,65535UL}};
            int32_t l_150 = (-1L);
            for (g_40 = 1; (g_40 >= 0); g_40 -= 1)
            { 
                int32_t l_96 = (-1L);
                union U2 l_109 = {1L};
                int i, j, k;
                l_96 |= (safe_div_func_uint8_t_u_u((g_89[g_40][g_40][(g_40 + 3)] || (safe_mod_func_int16_t_s_s((((p_33 , (g_95 &= ((((g_94[0][0] , l_73) != g_89[1][0][4]) & p_34) , p_33))) < g_94[0][0].f1) ^ l_88), 0x6B1CL))), g_2));
                l_73 = (g_111[0][3][1] ^= (~((p_33 <= ((safe_add_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint64_t_u_u((~((safe_sub_func_uint64_t_u_u((g_89[g_40][(p_34 + 2)][(g_40 + 3)] = ((safe_mul_func_uint16_t_u_u(0xDA34L, (1UL != (l_109 , l_110)))) & (-1L))), g_7)) ^ l_110)), l_109.f0)) && p_34) > g_94[0][0].f1) >= g_95), p_33)) , 65535UL), 0xD68CL)) , 0xB4BD6B46L)) , 0xEBL)));
                g_118[0] = ((l_96 = (p_33 < ((l_110 != ((((g_116 ^= (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(p_33, (((l_83 = p_34) == p_34) , 0x33L))), 6L))) == g_7) && g_94[0][0].f1) < 1L)) > l_117))) , g_2);
            }
            l_139 &= (safe_mod_func_uint32_t_u_u(((g_7 & (p_33 <= ((l_125 , ((safe_lshift_func_int8_t_s_s(((((((l_137 = (((g_136[1] |= (((safe_div_func_uint8_t_u_u(((l_125.f3 = (safe_add_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(((((p_33 > g_2) & l_83) < p_34) ^ l_110), 6)) & 3UL) && p_34), 4L)) ^ g_95) | p_34) > 0L), l_125.f0.f2))) ^ g_111[0][3][1]), g_72)) == g_118[0]) , p_33)) & 0UL) , l_117)) , l_138[0][0][2]) , p_33) , p_34) < 5L) && p_34), g_40)) || g_136[1])) <= p_33))) >= 0UL), g_118[0]));
            for (l_88 = 0; (l_88 <= 1); l_88 += 1)
            { 
                int i, j, k;
                l_150 = ((safe_mod_func_int32_t_s_s(((l_125.f3 = ((((g_89[l_88][(l_88 + 2)][(p_33 + 1)] , ((((safe_sub_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((g_40 = (g_89[l_88][p_34][p_33] > 255UL)) | (g_89[l_88][p_34][l_88] <= g_111[0][2][1])) != 18446744073709551615UL), 0x46L)), p_34)), 0)) & p_33) == l_110), g_116)) | 0xC9L) ^ l_138[0][0][2].f0) != p_34)) == p_34) > p_33) <= p_34)) && g_89[0][2][2]), l_117)) , p_34);
                if (p_34)
                    break;
                l_73 = p_34;
            }
        }
        for (l_71 = 0; (l_71 < 51); l_71 = safe_add_func_uint32_t_u_u(l_71, 3))
        { 
            struct S0 l_159 = {-6L,1L,65533UL};
            int16_t l_180 = 0x49B0L;
            int32_t l_182 = 0xAE872CB3L;
            l_182 = (safe_mul_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u(((((l_137 ^= (safe_div_func_uint64_t_u_u(((l_159 , (g_89[0][1][0] |= (((((((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((((safe_add_func_int8_t_s_s((g_181[1][3] = (safe_mul_func_int16_t_s_s(((l_138[0][1][4] , (((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(g_7, (safe_sub_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_s(l_159.f0, p_33)) == g_72) || g_118[0]) , g_111[0][0][0]) || 0x05L), p_33)))) && l_180), g_111[0][0][3])) ^ l_52) && 0x375795804E8CAA09LL)) && g_7), l_180))), (-1L))) == 0x09L) > p_34) == p_34) , 0x2961L), 0x608DL)) > p_34), p_33)) < 0x8CL) | p_34), g_111[0][1][3])), p_34)) >= 6L) == l_159.f1) == l_159.f1) & l_139) < 0x28DE542F5EF4C97ALL) < l_87))) < 5L), 0x13D90FEA2692C927LL))) == 0x63L) < 0L) ^ 0UL), p_33)) <= g_118[0]) && g_2), p_34));
            for (l_182 = 0; (l_182 >= 23); l_182 = safe_add_func_int32_t_s_s(l_182, 4))
            { 
                uint32_t l_193[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_193[i] = 1UL;
                g_40 = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((((((safe_lshift_func_uint16_t_u_s(g_118[0], ((-9L) > (l_137 ^= (((safe_sub_func_uint32_t_u_u((g_95 , p_34), l_73)) && g_116) | 0xBFA45521639E2500LL))))) > (-1L)) || g_181[2][2]) & g_40) , 0xA848L) != l_193[1]), 0xB8L)), (-7L)));
            }
            for (l_83 = 0; (l_83 <= 0); l_83 += 1)
            { 
                uint32_t l_202 = 0x57BED906L;
                int i, j, k;
                g_40 = (safe_add_func_int16_t_s_s(g_89[(l_83 + 1)][(l_83 + 1)][(p_34 + 2)], (l_88 = ((safe_mod_func_int16_t_s_s((p_34 && (safe_lshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(p_33, (p_33 & 0xD34CFEFF8C8359BELL))) ^ l_83), l_202))), 3UL)) , g_118[0]))));
                l_137 = p_34;
                if (g_89[(l_83 + 1)][(l_83 + 1)][(p_34 + 2)])
                    break;
            }
        }
    }
    return l_138[0][0][2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_89[i][j][k], "g_89[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_94[i][j].f0, "g_94[i][j].f0", print_hash_value);
            transparent_crc(g_94[i][j].f1, "g_94[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_111[i][j][k], "g_111[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_118[i], "g_118[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_136[i], "g_136[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_181[i][j], "g_181[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_206[i], "g_206[i]", print_hash_value);

    }
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_286.f0, "g_286.f0", print_hash_value);
    transparent_crc(g_286.f1, "g_286.f1", print_hash_value);
    transparent_crc(g_286.f2, "g_286.f2", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_339[i][j], "g_339[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
