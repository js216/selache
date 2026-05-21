// SPDX-License-Identifier: MIT
// cctest_csmith_8df44e73.c --- cctest case csmith_8df44e73 (csmith seed 2381598323)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa94599cc */

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

// Options:   -s 2381598323 -o /tmp/csmith_gen_jo2856gj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   uint8_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

struct S2 {
   uint64_t  f0;
   uint64_t  f1;
   struct S0  f2;
   uint32_t  f3;
   uint64_t  f4;
   const int32_t  f5;
};

union U3 {
   struct S2  f0;
   uint16_t  f1;
};


static uint32_t g_2 = 0x43BEB716L;
static uint32_t g_26[5] = {1UL,1UL,1UL,1UL,1UL};
static int8_t g_30 = 4L;
static uint32_t g_31 = 0xB12393DFL;
static uint32_t g_35 = 18446744073709551615UL;
static struct S0 g_46 = {0x81308FB8L};
static union U3 g_49 = {{18446744073709551614UL,0x9A6E4C1C17FA6FBALL,{-1L},1UL,0UL,-2L}};
static uint8_t g_59 = 3UL;
static uint16_t g_60 = 1UL;
static uint32_t g_123[1] = {18446744073709551615UL};
static uint8_t g_124 = 0x71L;
static uint16_t g_131[4][1] = {{0x90EDL},{0x90EDL},{0x90EDL},{0x90EDL}};
static int32_t g_148 = (-1L);
static uint8_t g_154[1][3][3] = {{{0xF3L,0xF3L,0xF3L},{0xF3L,0xF3L,0xF3L},{0xF3L,0xF3L,0xF3L}}};



static uint8_t  func_1(void);
static struct S0  func_3(int64_t  p_4, struct S2  p_5, struct S0  p_6);
static struct S0  func_8(int8_t  p_9);
static int8_t  func_16(uint8_t  p_17, uint16_t  p_18);




static uint8_t  func_1(void)
{ 
    uint32_t l_58 = 8UL;
    uint32_t l_61[3][1][4] = {{{0x008F4F80L,0x008F4F80L,0x008F4F80L,0x008F4F80L}},{{0x008F4F80L,0x008F4F80L,0x008F4F80L,0x008F4F80L}},{{0x008F4F80L,0x008F4F80L,0x008F4F80L,0x008F4F80L}}};
    struct S0 l_98 = {0x87FBE72DL};
    struct S2 l_113 = {0x20D596B20D6D5556LL,7UL,{0x5669B834L},9UL,18446744073709551612UL,-1L};
    int32_t l_127 = 0L;
    int32_t l_130 = (-3L);
    uint16_t l_155 = 0x86B9L;
    uint32_t l_162 = 4294967295UL;
    int8_t l_164 = 0x88L;
    int i, j, k;
    if (g_2)
    { 
        struct S2 l_7 = {18446744073709551606UL,0xFB3A4DF6F97812A3LL,{0xC92EA21EL},1UL,0UL,-5L};
        int64_t l_109 = 1L;
        g_46 = func_3(g_2, l_7, func_8(l_7.f1));
        if ((((((g_49 , (g_60 = (safe_rshift_func_uint8_t_u_s(((g_26[3] <= (g_59 ^= (l_7.f2.f0 = ((((safe_mod_func_int64_t_s_s(l_7.f1, (safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(l_58, g_30)), 2)))) && 2L) != g_2) != g_2)))) || l_58), 1)))) || l_61[2][0][0]) || (-4L)) < 0xA9L) <= l_61[2][0][0]))
        { 
            int8_t l_66 = 0xDBL;
            int32_t l_81 = 0L;
            for (g_49.f0.f3 = 12; (g_49.f0.f3 < 46); ++g_49.f0.f3)
            { 
                l_7.f2 = g_46;
                if (g_59)
                    break;
                return l_61[2][0][1];
            }
            for (g_30 = 13; (g_30 <= 16); g_30 = safe_add_func_int64_t_s_s(g_30, 5))
            { 
                uint32_t l_80 = 4294967290UL;
                uint8_t l_82[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_82[i] = 0x5FL;
                g_46 = func_8(l_66);
                g_46.f0 |= ((((((((safe_mul_func_uint8_t_u_u(l_61[0][0][1], ((((safe_mod_func_uint16_t_u_u((!(safe_mul_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((((l_7.f3 != g_26[1]) > (((safe_lshift_func_uint16_t_u_s(l_80, l_81)) <= l_80) != 0x2D97L)) && g_59), 247UL)) && l_58) && l_80), g_35))), l_58)) <= l_66) <= g_30) <= 8UL))) , g_35) & g_49.f0.f3) , 0L) , g_49.f0.f2.f0) >= l_82[0]) < g_49.f0.f1) ^ 0L);
                if (l_61[1][0][1])
                    break;
            }
        }
        else
        { 
            struct S2 l_85 = {18446744073709551612UL,0x79AE65B8C0B7B9EALL,{-1L},0UL,3UL,-5L};
            uint64_t l_95 = 1UL;
            g_49.f0.f2 = func_3((safe_sub_func_int64_t_s_s((l_95 = ((l_85 , ((safe_add_func_uint16_t_u_u((8L < (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((!1UL) & ((safe_rshift_func_uint16_t_u_u(((g_49.f0.f4 || g_49.f0.f2.f0) && 0x86L), l_85.f0)) < g_31)), l_85.f0)), 6))), 0xEC66L)) | l_85.f1)) | l_58)), l_85.f0)), g_49.f0, g_49.f0.f2);
            for (g_31 = 0; (g_31 < 7); g_31 = safe_add_func_int64_t_s_s(g_31, 1))
            { 
                if (l_85.f4)
                    break;
                l_85.f2 = l_98;
            }
            g_46.f0 = ((g_30 < (safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(g_60, 0x27B0L)), (l_109 = ((safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((l_85.f2.f0 = 0x28L), 9UL)), g_49.f0.f0)) && g_35)))), g_26[3]))) <= g_59);
        }
    }
    else
    { 
        int16_t l_122 = 0L;
        int16_t l_125 = 0x932EL;
        uint8_t l_175 = 255UL;
        int32_t l_176 = 1L;
        if ((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint64_t_u(((g_49.f0.f1 = g_60) , (l_113 , g_46.f0)))), ((g_124 = (((safe_sub_func_int32_t_s_s((g_123[0] = (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_2, l_122)), g_46.f0)), l_113.f1))), g_31)) ^ 1UL) | 4294967291UL)) == l_113.f4))))
        { 
            int8_t l_126 = (-2L);
            int32_t l_128 = 0x517B9ED3L;
            int32_t l_129 = 0x27215479L;
            uint32_t l_136[3];
            int32_t l_141 = 0x0452890DL;
            int i;
            for (i = 0; i < 3; i++)
                l_136[i] = 0x06A2FBD8L;
            --g_131[2][0];
            l_141 = (((safe_lshift_func_uint8_t_u_s(246UL, 0)) > ((-9L) || (l_136[0] ^= (g_49.f0.f2.f0 ^= l_125)))) != ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_2, 4)), g_131[2][0])) != 0xC415L));
        }
        else
        { 
            uint32_t l_149 = 0x1F71B9F5L;
            g_154[0][2][2] |= (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((g_49.f0 , g_131[2][0]), ((l_149++) >= (0x608DL | (safe_rshift_func_uint16_t_u_s(l_122, 15)))))), 4)), g_35));
        }
        for (l_130 = 0; (l_130 >= 0); l_130 -= 1)
        { 
            int8_t l_163 = 0x8DL;
            int16_t l_165[2][3];
            int32_t l_166 = 0xAC723E32L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_165[i][j] = 0x6DF6L;
            }
            l_166 |= (((((l_155 | ((((safe_mul_func_int8_t_s_s(((g_124 || ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((g_59 = (l_98.f0 > 1L)), l_162)), (-4L))) >= g_46.f0)) ^ g_60), l_163)) <= l_164) & l_165[1][1]) < l_127)) != 5UL) == 0xDB462DF2AD296291LL) <= g_123[0]) , 6L);
            for (g_49.f0.f1 = 0; (g_49.f0.f1 <= 0); g_49.f0.f1 += 1)
            { 
                int32_t l_167 = 0xE9BACE15L;
                if (l_167)
                    break;
                l_176 = ((((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((~4L), (((l_122 || (l_165[1][1] || (4UL > l_165[0][0]))) || g_123[0]) , l_61[2][0][0]))) | g_30), 0x1905L)), g_154[0][0][0])) ^ l_113.f5) || l_175) < 5UL);
            }
        }
    }
    l_127 = (safe_lshift_func_int8_t_s_u(((0x40L > (l_113.f2.f0 = 0xB0L)) & ((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_113.f4, 65531UL)), 1L)) > 0x5D4E925984574007LL)), 4));
    return g_131[2][0];
}



static struct S0  func_3(int64_t  p_4, struct S2  p_5, struct S0  p_6)
{ 
    struct S0 l_48 = {0x13DB3B8CL};
    return l_48;
}



static struct S0  func_8(int8_t  p_9)
{ 
    uint8_t l_10 = 1UL;
    int16_t l_34[2];
    int32_t l_45[2][3] = {{(-1L),(-1L),0xC4B50777L},{(-1L),(-1L),0xC4B50777L}};
    struct S0 l_47 = {0L};
    int i, j;
    for (i = 0; i < 2; i++)
        l_34[i] = 1L;
    l_10 |= g_2;
    for (p_9 = (-7); (p_9 != (-7)); p_9 = safe_add_func_uint64_t_u_u(p_9, 6))
    { 
        uint64_t l_22 = 0x12EF314D41BD43D9LL;
        int32_t l_42[5][2] = {{0xA3D0676DL,0xA3D0676DL},{0xA3D0676DL,0xA3D0676DL},{0xA3D0676DL,0xA3D0676DL},{0xA3D0676DL,0xA3D0676DL},{0xA3D0676DL,0xA3D0676DL}};
        struct S0 l_43 = {0L};
        int i, j;
        g_35 |= (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((l_34[1] = ((l_10 == func_16(g_2, (p_9 != ((((+(safe_mod_func_int64_t_s_s((1UL & p_9), l_22))) ^ g_2) ^ p_9) <= 1L)))) <= g_30)))), g_30));
        if (g_35)
            break;
        for (g_31 = (-14); (g_31 >= 26); g_31 = safe_add_func_int32_t_s_s(g_31, 3))
        { 
            if ((l_42[2][0] = (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((l_34[1] | (0xDAL < 0UL)) >= p_9) == g_26[2]), p_9)) | l_34[0]), g_26[3]))))
            { 
                return l_43;
            }
            else
            { 
                uint64_t l_44[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_44[i] = 0xC631DBC551464E94LL;
                l_45[1][1] &= l_44[4];
                return g_46;
            }
        }
    }
    return l_47;
}



static int8_t  func_16(uint8_t  p_17, uint16_t  p_18)
{ 
    struct S1 l_23 = {0xC48968F2L,0xCEL,1L};
    struct S1 l_24 = {0x35D5D909L,0UL,0x90B8A442L};
    int8_t l_25[4][4] = {{0x18L,0xF1L,0xF1L,0x18L},{0xF1L,0x18L,0xF1L,0xF1L},{0x18L,0x18L,6L,0x18L},{0x18L,0xF1L,0xF1L,0x18L}};
    int32_t l_29 = 4L;
    int i, j;
    l_24 = (l_23 = l_23);
    for (l_23.f0 = 0; (l_23.f0 <= 3); l_23.f0 += 1)
    { 
        --g_26[3];
        for (p_17 = 0; (p_17 <= 3); p_17 += 1)
        { 
            --g_31;
        }
    }
    return g_2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);

    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_49.f0.f0, "g_49.f0.f0", print_hash_value);
    transparent_crc(g_49.f0.f1, "g_49.f0.f1", print_hash_value);
    transparent_crc(g_49.f0.f2.f0, "g_49.f0.f2.f0", print_hash_value);
    transparent_crc(g_49.f0.f3, "g_49.f0.f3", print_hash_value);
    transparent_crc(g_49.f0.f4, "g_49.f0.f4", print_hash_value);
    transparent_crc(g_49.f0.f5, "g_49.f0.f5", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_123[i], "g_123[i]", print_hash_value);

    }
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_131[i][j], "g_131[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_154[i][j][k], "g_154[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
