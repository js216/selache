// SPDX-License-Identifier: MIT
// cctest_csmith_77fe261b.c --- cctest case csmith_77fe261b (csmith seed 2013144603)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8877d7ab */

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

// Options:   -s 2013144603 -o /tmp/csmith_gen_tspfin12/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint32_t  f0;
};
#pragma pack(pop)

struct S2 {
   const uint8_t  f0;
   int8_t  f1;
};

struct S3 {
   const uint8_t  f0;
   uint32_t  f1;
   int8_t  f2;
   int16_t  f3;
   int32_t  f4;
   int32_t  f5;
};

union U4 {
   uint16_t  f0;
};

union U5 {
   const uint32_t  f0;
   const struct S0  f1;
   uint8_t  f2;
};

union U6 {
   uint16_t  f0;
   uint16_t  f1;
   int8_t  f2;
   int32_t  f3;
};


static uint64_t g_2 = 0xA94B2AB76D6092F6LL;
static struct S3 g_11 = {0x60L,0x6FDA0246L,0x38L,-1L,3L,0xBC35240CL};
static struct S2 g_17[3] = {{0x59L,0xA4L},{0x59L,0xA4L},{0x59L,0xA4L}};
static union U6 g_26[3] = {{3UL},{3UL},{3UL}};
static const struct S0 g_31[4][1][1] = {{{{0x1290L}}},{{{0x1290L}}},{{{0x1290L}}},{{{0x1290L}}}};
static struct S0 g_32 = {-1L};
static uint32_t g_50 = 0xA3FEE22EL;
static int32_t g_64[2] = {(-5L),(-5L)};
static uint16_t g_67 = 65527UL;
static int32_t g_73[1] = {5L};
static uint16_t g_75 = 0xCA36L;
static uint32_t g_81 = 0x7E86750AL;
static uint32_t g_82 = 0UL;
static int8_t g_115 = 1L;
static int32_t g_118 = 0x9BDCC1C6L;
static uint16_t g_119 = 5UL;
static uint32_t g_176 = 4294967287UL;
static uint8_t g_177 = 255UL;
static union U4 g_209 = {5UL};



static union U4  func_1(void);
static int32_t  func_5(int32_t  p_6, struct S3  p_7, uint8_t  p_8, struct S1  p_9, union U5  p_10);
static struct S1  func_12(struct S2  p_13, uint32_t  p_14, uint64_t  p_15, int32_t  p_16);
static int32_t  func_20(int16_t  p_21, union U6  p_22, union U5  p_23, struct S2  p_24, struct S3  p_25);




static union U4  func_1(void)
{ 
    uint32_t l_18[5] = {1UL,1UL,1UL,1UL,1UL};
    union U5 l_126 = {0xBDD19600L};
    int32_t l_198[4][4][4] = {{{9L,0x784B4C2BL,0x784B4C2BL,9L},{0xABCC59C1L,0xC80B3D8DL,(-1L),(-1L)},{(-1L),(-1L),(-1L),8L},{1L,0L,0x2E47CAD9L,8L}},{{0x42BFDF69L,(-1L),1L,(-1L)},{0xAEBFDBDBL,0xC80B3D8DL,(-1L),9L},{(-1L),0x784B4C2BL,0x42BFDF69L,(-1L)},{(-1L),0L,0x42BFDF69L,1L}},{{(-1L),0x784B4C2BL,(-1L),(-1L)},{1L,1L,8L,0xABCC59C1L},{1L,8L,0xC80B3D8DL,9L},{(-1L),6L,(-1L),0xC80B3D8DL}},{{0xC80B3D8DL,6L,1L,9L},{6L,8L,6L,0xABCC59C1L},{0x784B4C2BL,1L,0x2E47CAD9L,(-1L)},{0xAEBFDBDBL,0x784B4C2BL,0xABCC59C1L,1L}}};
    int32_t l_206 = 0x9DD4B5B4L;
    int i, j, k;
lbl_156:
    --g_2;
    g_118 = func_5(g_2, g_11, g_11.f4, func_12(g_17[2], l_18[3], l_18[3], l_18[4]), l_126);
    if (((g_64[1] | (safe_mul_func_uint8_t_u_u((l_18[2] || (safe_mod_func_uint16_t_u_u(((l_126.f0 , ((~((safe_rshift_func_uint16_t_u_u(l_18[1], 2)) >= g_26[0].f0)) ^ g_11.f4)) > l_126.f0), 0x61B9L))), l_126.f2))) >= g_118))
    { 
        uint32_t l_150 = 18446744073709551610UL;
        int32_t l_151[5][3] = {{0xBECA4C4AL,0xBECA4C4AL,0x76E86CC2L},{0x91BD5E56L,0x91BD5E56L,0x96ABDE1DL},{0xBECA4C4AL,0xBECA4C4AL,0x76E86CC2L},{0x91BD5E56L,0x91BD5E56L,0x96ABDE1DL},{0xBECA4C4AL,0xBECA4C4AL,0x76E86CC2L}};
        int32_t l_190 = 0x5F34EB0AL;
        int i, j;
        if (((safe_div_func_uint64_t_u_u((((g_67 <= l_150) , (l_151[2][2] &= 65526UL)) || (safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(l_150, g_2)), l_150))), g_81)) >= 18446744073709551611UL))
        { 
            uint32_t l_158 = 0xABA7F53FL;
            int32_t l_179 = 1L;
            if (g_26[0].f1)
            { 
                int32_t l_157 = 6L;
                if (g_11.f1)
                    goto lbl_156;
                l_157 = 0x4896CD41L;
                l_158++;
            }
            else
            { 
                int8_t l_175 = 0xBAL;
                uint32_t l_178 = 18446744073709551615UL;
                l_179 = ((((safe_div_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(g_31[1][0][0].f0, ((safe_rshift_func_uint8_t_u_s((((l_151[2][2] = l_175) , (l_18[3] > g_176)) > 4294967294UL), l_158)) | 0x30B2L))), 0xC0AFFF8CD5190A73LL)), g_81)), g_11.f1)) & 0xA9L) | g_177), 2)) > 4L), g_75)) || g_73[0]) <= l_178) == l_126.f2);
            }
        }
        else
        { 
            int64_t l_184 = 0xDF34B8501F8A6136LL;
            int32_t l_189 = 0xDFE02593L;
            g_118 ^= g_17[2].f0;
            l_190 = (l_126.f1.f0 && (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((((g_32.f0 = (l_184 = g_31[1][0][0].f0)) != ((l_151[2][2] = (g_81 ^ (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_64[0], l_189)), l_189)))) > 0x8638DCB3L)) ^ g_118), l_126.f0)) < 1UL), l_150)));
        }
    }
    else
    { 
        int64_t l_197 = 0x8A301CD7A3E1DEC7LL;
        const union U4 l_203 = {0xFDF9L};
        int32_t l_207[4][4] = {{(-8L),0x83E2E9BBL,0x483840BFL,0x83E2E9BBL},{(-7L),0L,0x7B0EC45AL,0x483840BFL},{0x83E2E9BBL,0L,0L,0x83E2E9BBL},{0L,0x83E2E9BBL,(-7L),(-8L)}};
        int8_t l_208 = 0L;
        int i, j;
        g_11.f4 = ((safe_lshift_func_uint16_t_u_u(((g_11.f4 < (safe_unary_minus_func_int32_t_s((((safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((l_198[2][0][1] ^= l_197))), g_73[0])) < (safe_lshift_func_int16_t_s_u((g_64[0] , g_31[1][0][0].f0), 13))) != 0x42F281150074567ELL)))) > l_126.f1.f0), g_11.f0)) == (-6L));
        l_208 ^= (((((l_207[0][0] ^= (safe_mod_func_int8_t_s_s(((l_203 , (safe_rshift_func_uint16_t_u_u((((l_206 < 1UL) == (((((g_11.f3 ^= 1L) ^ g_115) && l_197) | l_203.f0) <= 0xDDL)) != l_197), g_82))) | g_17[2].f0), g_31[1][0][0].f0))) && 0xD5964DF9D1658148LL) >= 65533UL) , g_11.f4) ^ g_67);
    }
    return g_209;
}



static int32_t  func_5(int32_t  p_6, struct S3  p_7, uint8_t  p_8, struct S1  p_9, union U5  p_10)
{ 
    int32_t l_131 = 0x1CF73297L;
    int32_t l_134 = 6L;
    union U5 l_140 = {18446744073709551615UL};
    p_7.f4 = (safe_mod_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u((0xFAFF4B71L && ((l_131 != (((safe_lshift_func_int16_t_s_s(((l_134 = 0xB064L) & (safe_unary_minus_func_uint16_t_u((~(!(safe_mod_func_uint64_t_u_u(((l_140 , 65528UL) & g_2), g_17[2].f1))))))), p_10.f0)) <= l_140.f2) | 0x324CD905F98FFF8BLL)) <= 0x9646L)), l_140.f0)) || l_140.f1.f0), 0xCC63A23B04249512LL));
    return g_26[0].f1;
}



static struct S1  func_12(struct S2  p_13, uint32_t  p_14, uint64_t  p_15, int32_t  p_16)
{ 
    int16_t l_19[4] = {(-7L),(-7L),(-7L),(-7L)};
    struct S1 l_125[5] = {{0x3E3A24B7L},{0x3E3A24B7L},{0x3E3A24B7L},{0x3E3A24B7L},{0x3E3A24B7L}};
    int i;
    for (p_14 = 0; (p_14 <= 3); p_14 += 1)
    { 
        union U5 l_27 = {1UL};
        int32_t l_122 = 0xC67DCA9EL;
        int i;
        if ((l_122 = func_20(l_19[p_14], g_26[0], l_27, g_17[0], g_11)))
        { 
            struct S0 l_124 = {0x71E3L};
            for (g_119 = 0; (g_119 <= 3); g_119 += 1)
            { 
                struct S0 l_123 = {0x7267L};
                l_124 = l_123;
            }
            if (g_26[0].f2)
                continue;
        }
        else
        { 
            for (l_27.f2 = 0; (l_27.f2 <= 3); l_27.f2 += 1)
            { 
                if (g_11.f5)
                    break;
                if (p_14)
                    break;
            }
        }
        if (l_27.f2)
            continue;
    }
    return l_125[4];
}



static int32_t  func_20(int16_t  p_21, union U6  p_22, union U5  p_23, struct S2  p_24, struct S3  p_25)
{ 
    uint32_t l_28 = 4294967292UL;
    int32_t l_43 = (-1L);
    int64_t l_45[4][4][4] = {{{(-1L),(-1L),3L,0x33C574C3FC6C064BLL},{1L,(-1L),(-1L),1L},{1L,0x0A751F09958A82D8LL,1L,1L},{0xF464CC08F94BBB87LL,0x33C574C3FC6C064BLL,(-6L),0x3EC6B9FE2185AEBCLL}},{{5L,1L,2L,0x3EC6B9FE2185AEBCLL},{0x0A751F09958A82D8LL,0x33C574C3FC6C064BLL,6L,1L},{(-1L),0x0A751F09958A82D8LL,(-1L),1L},{2L,(-1L),(-1L),0x33C574C3FC6C064BLL}},{{0x3EC6B9FE2185AEBCLL,(-1L),1L,(-1L)},{1L,3L,1L,1L},{0x3EC6B9FE2185AEBCLL,0x5E714ABA13E97A0ELL,(-1L),(-1L)},{2L,2L,(-1L),1L}},{{(-1L),1L,6L,0x0A751F09958A82D8LL},{0x0A751F09958A82D8LL,0xF464CC08F94BBB87LL,2L,6L},{5L,0xF464CC08F94BBB87LL,(-6L),0x0A751F09958A82D8LL},{0xF464CC08F94BBB87LL,1L,1L,1L}}};
    int i, j, k;
    --l_28;
    g_32 = g_31[1][0][0];
    for (p_25.f3 = 0; (p_25.f3 <= 2); p_25.f3 += 1)
    { 
        int32_t l_44[4][1] = {{0L},{1L},{0L},{1L}};
        int32_t l_49 = 0xC6DEA280L;
        int32_t l_74[3][3] = {{9L,9L,0x380447D5L},{9L,9L,0x380447D5L},{9L,9L,0x380447D5L}};
        struct S1 l_112[1][3][1] = {{{{4294967288UL}},{{4294967288UL}},{{4294967288UL}}}};
        int i, j, k;
        for (p_22.f1 = 0; (p_22.f1 <= 2); p_22.f1 += 1)
        { 
            int32_t l_41 = 0xB1D0B827L;
            const int32_t l_42 = (-1L);
            int32_t l_48 = 0x6F5CA208L;
            struct S0 l_69 = {-5L};
            struct S2 l_91 = {1UL,0xE5L};
        }
        g_32 = g_31[1][0][0];
        if ((safe_rshift_func_uint8_t_u_u(g_11.f5, 5)))
        { 
            int32_t l_113 = (-1L);
            p_25.f4 = (safe_div_func_uint16_t_u_u(g_2, (safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s(1L, (l_74[2][0] &= (+((((l_112[0][2][0] , 0L) > l_113) == 3L) && l_44[0][0]))))), g_67)), 0x890DL))));
        }
        else
        { 
            int8_t l_114 = 1L;
            int32_t l_116 = 5L;
            int32_t l_117[5][2];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_117[i][j] = 0x0CD436FCL;
            }
            g_119--;
            return p_25.f2;
        }
    }
    return l_43;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    transparent_crc(g_11.f5, "g_11.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_17[i].f0, "g_17[i].f0", print_hash_value);
        transparent_crc(g_17[i].f1, "g_17[i].f1", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_26[i].f0, "g_26[i].f0", print_hash_value);
        transparent_crc(g_26[i].f1, "g_26[i].f1", print_hash_value);
        transparent_crc(g_26[i].f2, "g_26[i].f2", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_31[i][j][k].f0, "g_31[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);

    }
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_73[i], "g_73[i]", print_hash_value);

    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
