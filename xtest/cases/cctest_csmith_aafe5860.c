// SPDX-License-Identifier: MIT
// cctest_csmith_aafe5860.c --- cctest case csmith_aafe5860 (csmith seed 2868795488)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x99c4abcb */

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

// Options:   -s 2868795488 -o /tmp/csmith_gen_sjolr63w/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint64_t  f0;
   uint16_t  f1;
   const uint32_t  f2;
   int32_t  f3;
   int16_t  f4;
   int32_t  f5;
   int16_t  f6;
};
#pragma pack(pop)

union U2 {
   struct S0  f0;
   int32_t  f1;
   int8_t * f2;
   int32_t  f3;
};


static int8_t g_8 = (-5L);
static uint64_t g_16 = 1UL;
static uint64_t g_27 = 8UL;
static const uint64_t *g_26 = &g_27;
static int32_t g_37 = 0xED0BD2F2L;
static uint8_t g_38[4] = {0x71L,0x71L,0x71L,0x71L};
static struct S1 g_54 = {0x50187E526954EB85LL,0xA759L,0UL,0x520A048CL,0x4060L,9L,0L};
static union U2 g_59 = {{0x347A64A0L}};
static int64_t g_81 = 0x358B9E0795B172C6LL;
static int8_t g_101 = 0L;
static int32_t g_103 = 1L;
static int64_t g_105 = (-3L);
static uint64_t g_107 = 18446744073709551609UL;
static int8_t *g_129 = &g_101;
static int8_t * const *g_128 = &g_129;
static int8_t * const **g_127 = &g_128;
static int8_t * const ***g_126 = &g_127;
static uint32_t *g_166 = (void*)0;
static int8_t g_193 = 0x90L;
static uint8_t g_259 = 0x7DL;
static union U2 *g_275 = (void*)0;
static uint16_t g_294 = 65532UL;
static int64_t g_295 = 0x183994F5809B3B63LL;
static int32_t g_296[1] = {1L};
static int32_t g_297 = 0L;
static int16_t *g_343 = &g_54.f4;
static int16_t **g_342 = &g_343;
static struct S0 *g_397 = (void*)0;
static struct S0 **g_396 = &g_397;
static int64_t g_417 = (-5L);
static uint32_t g_434 = 3UL;
static uint8_t g_461 = 0x22L;
static int64_t *g_584 = &g_81;
static int64_t **g_583 = &g_584;
static int8_t g_674 = 1L;
static struct S0 * const ****g_683 = (void*)0;
static int32_t *g_699 = &g_37;
static struct S0 * const *g_720 = &g_397;
static struct S0 * const **g_719 = &g_720;
static struct S0 * const ** const *g_718 = &g_719;
static uint32_t ***g_863[5][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
static const int32_t *g_874 = (void*)0;
static const int32_t **g_873 = &g_874;
static const int32_t ***g_872 = &g_873;
static int16_t g_889 = (-10L);
static const int64_t *g_903 = (void*)0;
static const int64_t **g_902 = &g_903;
static union U2 g_1057 = {{0xD394C205L}};
static uint64_t g_1139 = 0x89705EB0E454641ELL;
static uint8_t g_1148[3][2][3] = {{{0xD5L,0xD5L,1UL},{255UL,0xAEL,1UL}},{{0xAEL,255UL,1UL},{0xD5L,0xD5L,1UL}},{{255UL,0xAEL,1UL},{0xAEL,255UL,1UL}}};
static union U2 **g_1171 = &g_275;
static union U2 ***g_1170 = &g_1171;
static struct S1 g_1278 = {0x259776F52756F2BELL,65530UL,4294967295UL,5L,8L,-1L,-6L};
static struct S1 *g_1277 = &g_1278;
static struct S1 g_1297[5] = {{0xE1924CEBBAB859EDLL,8UL,4294967295UL,0x4C6707B7L,-5L,0x327C9EBDL,0xC74EL},{0xE1924CEBBAB859EDLL,8UL,4294967295UL,0x4C6707B7L,-5L,0x327C9EBDL,0xC74EL},{0xE1924CEBBAB859EDLL,8UL,4294967295UL,0x4C6707B7L,-5L,0x327C9EBDL,0xC74EL},{0xE1924CEBBAB859EDLL,8UL,4294967295UL,0x4C6707B7L,-5L,0x327C9EBDL,0xC74EL},{0xE1924CEBBAB859EDLL,8UL,4294967295UL,0x4C6707B7L,-5L,0x327C9EBDL,0xC74EL}};
static uint8_t **g_1329 = (void*)0;
static int16_t g_1366 = 0x3A53L;
static int8_t g_1376 = 0x35L;
static int32_t g_1382 = 0xCB3EC3F9L;
static int16_t ****g_1466 = (void*)0;
static int16_t ***g_1469 = &g_342;
static int16_t ****g_1468 = &g_1469;
static int8_t g_1511 = 0xB1L;
static union U2 * const **g_1529 = (void*)0;
static union U2 * const ***g_1528 = &g_1529;
static union U2 * const **** const g_1527[3][4][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528,&g_1528}}};
static const uint32_t *g_1534 = &g_1278.f2;
static const uint32_t **g_1533 = &g_1534;
static uint16_t g_1631 = 1UL;
static uint16_t g_1648 = 3UL;
static uint32_t ****g_1669 = &g_863[3][0][0];
static uint32_t *****g_1668 = &g_1669;
static struct S1 g_1672 = {18446744073709551611UL,0x14EAL,0xF6B4DFF5L,0L,-3L,0L,-1L};
static int64_t g_1709 = (-5L);
static const int64_t g_1726 = (-6L);
static const uint64_t g_1804[4][7] = {{0x075814DB91E1CD74LL,0xC60D689B9B5E70A6LL,0xC60D689B9B5E70A6LL,0x075814DB91E1CD74LL,18446744073709551612UL,0x075814DB91E1CD74LL,0xC60D689B9B5E70A6LL},{6UL,6UL,0x47CE0AC3544D5622LL,0UL,0x47CE0AC3544D5622LL,6UL,6UL},{0x7E5EA159F657E136LL,0xC60D689B9B5E70A6LL,0x0BD6489C4774419BLL,0xC60D689B9B5E70A6LL,0x7E5EA159F657E136LL,0x7E5EA159F657E136LL,0xC60D689B9B5E70A6LL},{0x33151F5165D641ADLL,3UL,0x33151F5165D641ADLL,0x47CE0AC3544D5622LL,0x47CE0AC3544D5622LL,0x33151F5165D641ADLL,3UL}};
static int32_t **g_1808 = &g_699;
static uint16_t g_1869 = 0UL;
static int32_t *** const g_1920[2][4][5] = {{{&g_1808,&g_1808,&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808,&g_1808,&g_1808}},{{&g_1808,&g_1808,&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808,&g_1808,&g_1808},{&g_1808,&g_1808,&g_1808,&g_1808,&g_1808}}};
static int32_t *** const *g_1919[1] = {&g_1920[0][2][3]};
static int32_t *** const **g_1918[7][4] = {{&g_1919[0],&g_1919[0],&g_1919[0],&g_1919[0]},{&g_1919[0],&g_1919[0],&g_1919[0],&g_1919[0]},{&g_1919[0],&g_1919[0],&g_1919[0],&g_1919[0]},{&g_1919[0],&g_1919[0],&g_1919[0],&g_1919[0]},{&g_1919[0],&g_1919[0],&g_1919[0],&g_1919[0]},{&g_1919[0],&g_1919[0],&g_1919[0],&g_1919[0]},{&g_1919[0],&g_1919[0],&g_1919[0],&g_1919[0]}};
static int64_t g_1956[2][4][4] = {{{0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL},{0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL},{0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL},{0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL}},{{0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL},{0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL},{0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL},{0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL,0xD7F9C7A68AE2D287LL}}};
static const struct S0 g_1978 = {0xB1515327L};
static const struct S0 *g_1977[1] = {&g_1978};
static const struct S0 **g_1976[1] = {&g_1977[0]};
static const struct S0 *** const g_1975 = &g_1976[0];
static const struct S0 *** const *g_1974 = &g_1975;
static union U2 g_2004 = {{0x7C3B85FEL}};
static struct S0 ***g_2024 = &g_396;
static struct S0 ****g_2023 = &g_2024;
static int32_t *g_2077 = (void*)0;
static uint32_t * const * const g_2088 = &g_166;
static uint32_t * const * const *g_2087 = &g_2088;
static int32_t g_2111 = 0L;
static const int64_t * const ** const *g_2130 = (void*)0;
static int64_t * const ****g_2266 = (void*)0;
static int64_t g_2272 = 0xE6741FA38B77653ELL;
static int32_t g_2289[2][3] = {{0L,(-2L),(-2L)},{0L,(-2L),(-2L)}};
static uint8_t g_2312[2][4] = {{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L}};



static uint64_t  func_1(void);
static int32_t  func_2(int8_t * const  p_3, struct S1  p_4, int32_t  p_5, uint32_t  p_6);
static struct S1  func_9(uint64_t  p_10, uint8_t  p_11, union U2  p_12, int64_t  p_13, int8_t * p_14);
static union U2  func_18(struct S0  p_19);
static struct S0  func_20(const uint64_t * p_21, union U2  p_22, int8_t * p_23, int32_t  p_24, int16_t  p_25);
static int8_t  func_28(uint64_t * p_29, int32_t  p_30, union U2  p_31, uint32_t  p_32);
static struct S0  func_33(uint64_t * p_34);
static int32_t  func_46(uint16_t  p_47, uint32_t  p_48, int32_t * p_49, union U2  p_50);




static uint64_t  func_1(void)
{ 
    int8_t *l_7 = &g_8;
    uint64_t *l_15 = &g_16;
    int32_t l_17 = (-1L);
    union U2 l_489 = {{0UL}};
    int8_t *l_492 = &g_8;
    struct S0 l_989[1] = {{0UL}};
    struct S0 *l_990 = &l_489.f0;
    union U2 *l_1026 = &l_489;
    struct S1 l_1798 = {0x82CC36330271BF45LL,65533UL,0x13F745D7L,0x3531B996L,0x136CL,0L,2L};
    int32_t **l_1807 = (void*)0;
    uint8_t l_1827 = 0x36L;
    uint32_t * const *l_1852[4][5][3] = {{{&g_166,&g_166,&g_166},{&g_166,&g_166,&g_166},{(void*)0,&g_166,&g_166},{&g_166,&g_166,&g_166},{&g_166,&g_166,&g_166}},{{(void*)0,&g_166,&g_166},{&g_166,&g_166,&g_166},{&g_166,&g_166,&g_166},{(void*)0,&g_166,&g_166},{&g_166,&g_166,&g_166}},{{&g_166,&g_166,&g_166},{(void*)0,&g_166,&g_166},{&g_166,&g_166,&g_166},{&g_166,&g_166,&g_166},{(void*)0,&g_166,&g_166}},{{&g_166,&g_166,&g_166},{&g_166,&g_166,&g_166},{(void*)0,&g_166,&g_166},{&g_166,&g_166,&g_166},{&g_166,&g_166,&g_166}}};
    uint32_t * const **l_1851 = &l_1852[3][4][0];
    uint32_t l_1866 = 0UL;
    int32_t l_1886 = 0x651048ECL;
    int32_t l_1887 = 0xA7FB72E9L;
    int8_t l_1946 = (-10L);
    const struct S0 *l_1972[2][2][6] = {{{&l_989[0],&l_489.f0,&l_989[0],&l_989[0],(void*)0,&l_989[0]},{&g_59.f0,&l_989[0],&g_59.f0,&l_989[0],&l_989[0],&g_59.f0}},{{(void*)0,(void*)0,&l_989[0],&l_989[0],&l_989[0],&l_989[0]},{&g_59.f0,&l_989[0],&l_989[0],&l_989[0],&l_989[0],&l_989[0]}}};
    const struct S0 **l_1971 = &l_1972[0][0][5];
    const struct S0 ***l_1970 = &l_1971;
    const struct S0 *** const *l_1969 = &l_1970;
    int8_t ** const * const *l_1980 = (void*)0;
    int8_t ** const * const **l_1979 = &l_1980;
    uint64_t l_1989 = 0xB6C00B7ABDE3824ALL;
    int64_t l_2008 = 7L;
    int32_t *l_2052 = &l_1798.f3;
    int64_t l_2078[5] = {0x37AA492024616583LL,0x37AA492024616583LL,0x37AA492024616583LL,0x37AA492024616583LL,0x37AA492024616583LL};
    uint32_t **l_2090 = &g_166;
    uint32_t ***l_2089 = &l_2090;
    int32_t l_2105 = 0L;
    int32_t *l_2147 = (void*)0;
    uint64_t l_2161[3];
    int64_t l_2222 = 0L;
    uint32_t l_2224 = 1UL;
    int64_t l_2239 = 0xC796BB63F96E7687LL;
    uint8_t *l_2240[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint64_t l_2245 = 1UL;
    int8_t l_2292 = 0L;
    int8_t l_2316[7];
    int8_t l_2390 = 0x0DL;
    uint64_t l_2401 = 0xF7FA8EDC44DF035ALL;
    uint64_t l_2405[1][7] = {{0UL,18446744073709551612UL,0UL,0UL,18446744073709551612UL,0UL,0UL}};
    int8_t **l_2409 = &l_492;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2161[i] = 0xCF52F5978B88EAD4LL;
    for (i = 0; i < 7; i++)
        l_2316[i] = 0x94L;
    (*g_699) = func_2((l_7 = (void*)0), func_9(((*l_15) ^= 18446744073709551615UL), l_17, ((*l_1026) = func_18(((*l_990) = (l_989[0] = func_20(g_26, ((((func_28(&g_27, g_8, ((((***g_127) = ((func_33((g_8 , &g_27)) , 0x46L) | l_17)) | l_17) , l_489), l_489.f0.f0) < l_489.f3) ^ l_489.f3) == l_17) , l_489), l_492, g_59.f3, l_489.f1))))), l_17, &g_8), l_17, l_17);
    if (((l_489.f0.f0 >= ((((*g_1277) , (g_81 != ((safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((+(safe_lshift_func_int8_t_s_s(9L, l_489.f3))), l_17)), (safe_mul_func_int16_t_s_s(((((*g_1277) , l_1798) , 0UL) < 0UL), g_101)))) ^ (*g_699)))) | 0x2571845E10246733LL) ^ (*g_26))) || 249UL))
    { 
        const int32_t l_1801 = 7L;
        const uint64_t *l_1803 = &g_1804[0][1];
        union U2 * const l_1825 = &g_1057;
        int16_t l_1836 = 4L;
        int8_t l_1841 = 8L;
        int32_t l_1864 = 0x8D699CC7L;
        int32_t l_1883 = 0xA2D174E2L;
        int32_t l_1888 = 7L;
        int32_t l_1926 = 6L;
        int32_t l_1927 = (-1L);
        uint64_t l_1962[4] = {0x5FDC4F31DD7A1DE9LL,0x5FDC4F31DD7A1DE9LL,0x5FDC4F31DD7A1DE9LL,0x5FDC4F31DD7A1DE9LL};
        int8_t ****l_1983 = (void*)0;
        int8_t *****l_1982[6] = {&l_1983,&l_1983,&l_1983,&l_1983,&l_1983,&l_1983};
        uint16_t l_1984 = 0UL;
        uint32_t ***l_1986 = (void*)0;
        struct S0 l_2005 = {4294967295UL};
        uint16_t l_2009 = 65535UL;
        int32_t *l_2011 = (void*)0;
        int32_t l_2019 = (-1L);
        int64_t l_2062 = 0x1ED1700901A8BC14LL;
        const int32_t l_2091[3] = {(-1L),(-1L),(-1L)};
        uint8_t l_2093 = 0xFFL;
        int i;
        if ((safe_lshift_func_uint16_t_u_u(65533UL, 13)))
        { 
            const uint64_t **l_1802 = &g_26;
            int32_t **l_1806 = &g_699;
            int32_t ***l_1805 = &l_1806;
            union U2 *l_1826 = (void*)0;
            int32_t l_1865 = 0x5E1CE828L;
            if (((l_1801 && ((**g_583) = ((l_1803 = ((*l_1802) = &g_1139)) != (void*)0))) ^ (((*l_1805) = &g_699) != (g_1808 = l_1807))))
            { 
                int64_t l_1824 = (-1L);
                int32_t *l_1854 = (void*)0;
                int32_t l_1855[7];
                int32_t *l_1856 = &l_1855[6];
                int32_t *l_1857 = &g_59.f1;
                int32_t *l_1858 = &g_1382;
                int32_t *l_1859 = &g_1672.f3;
                int32_t *l_1860 = (void*)0;
                int32_t *l_1861 = &g_1672.f5;
                int32_t *l_1862 = &l_1798.f3;
                int32_t *l_1863[6][4] = {{&g_37,(void*)0,(void*)0,&g_37},{(void*)0,&g_37,(void*)0,(void*)0},{&g_37,&g_37,(void*)0,&g_37},{&g_37,(void*)0,(void*)0,&g_37},{(void*)0,&g_37,(void*)0,(void*)0},{&g_37,&g_37,(void*)0,&g_37}};
                int i, j;
                for (i = 0; i < 7; i++)
                    l_1855[i] = (-9L);
                for (g_1648 = 0; (g_1648 == 4); ++g_1648)
                { 
                    int64_t l_1811[1][6] = {{0xDFDBC4504DCEA1DFLL,0xDFDBC4504DCEA1DFLL,0xDFDBC4504DCEA1DFLL,0xDFDBC4504DCEA1DFLL,0xDFDBC4504DCEA1DFLL,0xDFDBC4504DCEA1DFLL}};
                    int32_t *l_1828 = &g_1382;
                    uint8_t *l_1853 = &l_1827;
                    int i, j;
                    if (l_1811[0][5])
                        break;
                    (*g_699) &= 0x156730C0L;
                    (*l_1828) &= (((safe_lshift_func_int16_t_s_u(((safe_div_func_int32_t_s_s(((*g_699) = ((void*)0 != &l_1811[0][5])), 1L)) <= (*g_584)), (safe_sub_func_uint32_t_u_u(((g_294 |= ((*g_26) ^ (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((l_1801 ^ ((((((safe_rshift_func_uint16_t_u_u(((((0x79642FC2AD2D5907LL < l_1824) == (*g_343)) , 8UL) <= (*g_129)), 7)) != 65535UL) == 2UL) , (*l_990)) , l_1825) == l_1826)) && 0L), (**g_128))), l_1827)))) != l_1824), 0xBAFEB96BL)))) >= (**g_342)) && (-1L));
                    (*l_1828) = (safe_div_func_uint8_t_u_u((0x7EL || ((***g_127) |= (safe_rshift_func_uint8_t_u_s((~(safe_add_func_int32_t_s_s((*l_1828), (l_1836 , 0x8C1BFABCL)))), ((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_1841, g_1672.f5)), 0)) & ((+(safe_mul_func_int8_t_s_s((((*l_1853) = (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(((*g_699) = (l_1851 == (*g_1669))), 0x261648D1L)), (*l_1828))) , (*l_1828)) <= (*g_26)), l_1824))) ^ (*l_1828)), (-5L)))) , 0xE27B82383600AB0ELL)))))), 2L));
                }
                l_1866++;
                return g_1869;
            }
            else
            { 
                return (*g_26);
            }
        }
        else
        { 
            int64_t l_1879 = 0L;
            int32_t l_1881 = 0x7A0FC6FBL;
            int32_t l_1882 = 0x7CEDA104L;
            int32_t l_1885 = 0xE870F9B1L;
            int32_t l_1889 = 1L;
            uint32_t l_1890 = 0xCDEF8F6FL;
            for (l_1866 = (-3); (l_1866 <= 3); l_1866++)
            { 
                int32_t *l_1872 = (void*)0;
                int32_t *l_1873 = (void*)0;
                int32_t *l_1874 = &g_59.f1;
                int32_t *l_1875 = &g_1382;
                int32_t *l_1876 = &g_37;
                int32_t *l_1877 = &g_54.f3;
                int32_t *l_1878[5][2][2] = {{{&l_1864,&g_54.f5},{&l_1864,&l_1864}},{{&g_1672.f5,&l_1864},{&l_1864,&g_54.f5}},{{(void*)0,(void*)0},{&g_1672.f5,&g_1672.f5}},{{&g_1672.f5,&g_54.f5},{&g_54.f5,&g_103}},{{&l_1798.f5,&g_54.f5},{&g_103,&g_54.f5}}};
                int64_t l_1880 = 0L;
                int16_t l_1884 = 1L;
                int i, j, k;
                l_1890--;
                for (g_1709 = 0; (g_1709 >= 0); g_1709 -= 1)
                { 
                    int i;
                    (*g_873) = &g_296[g_1709];
                    if ((***g_872))
                        continue;
                }
            }
        }
        for (g_1672.f4 = 0; (g_1672.f4 > 21); g_1672.f4 = safe_add_func_uint32_t_u_u(g_1672.f4, 6))
        { 
            int32_t l_1899 = 0xC662A058L;
            int32_t ***l_1917 = (void*)0;
            int32_t ****l_1916 = &l_1917;
            int32_t *****l_1915 = &l_1916;
            int32_t l_1924[1][6];
            int64_t **l_1958 = &g_584;
            uint16_t l_1959 = 0xC6EDL;
            struct S0 l_1981 = {0x1C781E53L};
            uint32_t l_1985 = 1UL;
            uint32_t l_2007 = 4294967287UL;
            int32_t * const * const l_2069 = &g_699;
            int32_t * const * const *l_2068[5][2][6] = {{{&l_2069,&l_2069,(void*)0,&l_2069,&l_2069,(void*)0},{&l_2069,&l_2069,(void*)0,&l_2069,&l_2069,(void*)0}},{{&l_2069,&l_2069,(void*)0,&l_2069,&l_2069,(void*)0},{&l_2069,&l_2069,(void*)0,&l_2069,&l_2069,(void*)0}},{{&l_2069,&l_2069,(void*)0,&l_2069,&l_2069,(void*)0},{&l_2069,&l_2069,(void*)0,&l_2069,&l_2069,(void*)0}},{{&l_2069,&l_2069,(void*)0,&l_2069,&l_2069,(void*)0},{&l_2069,&l_2069,(void*)0,&l_2069,&l_2069,(void*)0}},{{&l_2069,&l_2069,(void*)0,&l_2069,&l_2069,(void*)0},{&l_2069,&l_2069,(void*)0,&l_2069,&l_2069,(void*)0}}};
            int32_t * const * const **l_2067[7][7] = {{&l_2068[4][0][3],&l_2068[3][0][4],&l_2068[3][1][2],&l_2068[3][0][4],&l_2068[4][0][3],(void*)0,(void*)0},{&l_2068[0][1][2],&l_2068[4][0][3],&l_2068[2][1][5],&l_2068[4][0][3],&l_2068[0][1][2],&l_2068[1][1][0],&l_2068[1][1][0]},{&l_2068[4][0][3],&l_2068[3][0][4],&l_2068[3][1][2],&l_2068[3][0][4],&l_2068[4][0][3],(void*)0,(void*)0},{&l_2068[0][1][2],&l_2068[4][0][3],&l_2068[2][1][5],&l_2068[4][0][3],&l_2068[0][1][2],&l_2068[1][1][0],&l_2068[1][1][0]},{&l_2068[4][0][3],&l_2068[3][0][4],&l_2068[3][1][2],&l_2068[3][0][4],&l_2068[4][0][3],(void*)0,(void*)0},{&l_2068[0][1][2],&l_2068[4][0][3],&l_2068[2][1][5],&l_2068[4][0][3],&l_2068[0][1][2],&l_2068[1][1][0],&l_2068[1][1][0]},{&l_2068[4][0][3],&l_2068[3][0][4],&l_2068[3][1][2],&l_2068[3][0][4],&l_2068[4][0][3],(void*)0,(void*)0}};
            union U2 l_2082[5] = {{{0x60D5803BL}},{{0x60D5803BL}},{{0x60D5803BL}},{{0x60D5803BL}},{{0x60D5803BL}}};
            int32_t l_2094 = (-1L);
            uint16_t l_2095 = 0UL;
            struct S0 l_2096 = {4294967293UL};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1924[i][j] = (-9L);
            }
            for (g_674 = (-1); (g_674 != 11); g_674++)
            { 
                int32_t l_1921 = 0xB35717FBL;
                int16_t l_1925[4] = {7L,7L,7L,7L};
                uint32_t l_1934 = 4294967289UL;
                struct S0 l_1937 = {0xF2495176L};
                uint64_t l_1938 = 0x8C8A4F8D2B2D30D9LL;
                int i;
                for (l_17 = (-16); (l_17 >= (-6)); l_17 = safe_add_func_uint32_t_u_u(l_17, 5))
                { 
                    (*l_990) = func_33(&g_1139);
                }
                if (l_1899)
                    continue;
            }
        }
    }
    else
    { 
        int16_t l_2106[1];
        int32_t l_2107[4];
        int32_t *l_2121 = (void*)0;
        int32_t * const *l_2125[7] = {&l_2121,&g_2077,&g_2077,&l_2121,&g_2077,&g_2077,&l_2121};
        int32_t * const **l_2124 = &l_2125[5];
        int32_t * const ***l_2123 = &l_2124;
        int32_t * const ****l_2122 = &l_2123;
        union U2 l_2144 = {{4294967294UL}};
        uint8_t l_2164 = 249UL;
        int64_t *** const l_2165 = &g_583;
        int32_t ***l_2175 = &l_1807;
        int32_t ****l_2174 = &l_2175;
        int32_t l_2201 = (-1L);
        uint16_t l_2202[3];
        uint8_t ** const *l_2225[3];
        int16_t ** const *l_2250[3];
        int16_t ** const **l_2249 = &l_2250[1];
        int64_t * const l_2271 = &g_2272;
        int64_t * const *l_2270[4][3][3] = {{{&l_2271,&l_2271,&l_2271},{(void*)0,(void*)0,(void*)0},{&l_2271,&l_2271,&l_2271}},{{(void*)0,(void*)0,(void*)0},{&l_2271,&l_2271,&l_2271},{(void*)0,(void*)0,(void*)0}},{{&l_2271,&l_2271,&l_2271},{(void*)0,(void*)0,(void*)0},{&l_2271,&l_2271,&l_2271}},{{(void*)0,(void*)0,(void*)0},{&l_2271,&l_2271,&l_2271},{(void*)0,(void*)0,(void*)0}}};
        int64_t * const **l_2269[3][4][5] = {{{&l_2270[1][2][1],&l_2270[1][0][1],(void*)0,(void*)0,&l_2270[0][2][1]},{&l_2270[3][0][2],&l_2270[2][1][2],&l_2270[2][0][2],(void*)0,&l_2270[0][2][1]},{&l_2270[0][2][1],&l_2270[2][0][2],&l_2270[1][0][1],(void*)0,&l_2270[1][2][1]},{(void*)0,&l_2270[1][1][2],&l_2270[1][1][2],(void*)0,(void*)0}},{{&l_2270[0][2][1],&l_2270[0][2][1],&l_2270[1][2][1],&l_2270[1][0][0],&l_2270[3][2][2]},{&l_2270[3][0][1],&l_2270[3][0][2],&l_2270[0][2][1],&l_2270[1][0][0],&l_2270[2][0][2]},{&l_2270[0][2][1],&l_2270[1][2][1],&l_2270[0][2][1],&l_2270[1][0][0],&l_2270[0][2][1]},{&l_2270[2][2][2],&l_2270[0][2][1],&l_2270[3][0][2],&l_2270[1][0][0],&l_2270[3][2][1]}},{{&l_2270[1][0][0],(void*)0,(void*)0,&l_2270[1][0][0],&l_2270[0][2][1]},{&l_2270[1][2][2],&l_2270[0][2][1],&l_2270[1][2][1],&l_2270[1][0][0],&l_2270[3][2][2]},{&l_2270[3][0][1],&l_2270[3][0][2],&l_2270[0][2][1],&l_2270[1][0][0],&l_2270[2][0][2]},{&l_2270[0][2][1],&l_2270[1][2][1],&l_2270[0][2][1],&l_2270[1][0][0],&l_2270[0][2][1]}}};
        int64_t * const ***l_2268 = &l_2269[0][3][2];
        int64_t * const ****l_2267 = &l_2268;
        int64_t *****l_2274 = (void*)0;
        const int8_t l_2282 = (-6L);
        const uint32_t l_2286 = 9UL;
        struct S0 **l_2298 = (void*)0;
        int16_t l_2306 = 0xAD8AL;
        int32_t l_2308 = 0x00F04CC2L;
        uint64_t l_2318 = 0UL;
        uint8_t l_2343[5][7][5] = {{{255UL,255UL,0x3BL,1UL,1UL},{0x62L,0x5BL,247UL,0x42L,248UL},{0x07L,255UL,1UL,255UL,1UL},{253UL,0UL,6UL,6UL,0UL},{0xCBL,0xE8L,1UL,0x1EL,1UL},{0xFAL,0xD5L,248UL,0xA2L,0x6FL},{247UL,0UL,255UL,0x4EL,0x5AL}},{{0xFAL,1UL,248UL,0xE2L,0xA7L},{0xCBL,0xAAL,4UL,0x24L,247UL},{253UL,247UL,0xD5L,0x6FL,251UL},{0x07L,0x33L,1UL,247UL,247UL},{0x62L,250UL,0x62L,3UL,255UL},{255UL,0x29L,1UL,255UL,0xAAL},{0x87L,0xE2L,0UL,0x62L,255UL}},{{0xA8L,247UL,1UL,0xAAL,1UL},{0x5AL,6UL,0x62L,0x5BL,247UL},{1UL,1UL,1UL,0x83L,0x63L},{6UL,255UL,0xD5L,0xA7L,0xFAL},{255UL,9UL,4UL,9UL,255UL},{0UL,0x8DL,248UL,250UL,0x81L},{0x24L,0x07L,255UL,247UL,0UL}},{{0xF1L,0xFAL,248UL,0x8DL,0x81L},{0xF7L,247UL,1UL,1UL,255UL},{0x81L,4UL,6UL,9UL,0xFAL},{1UL,0x3BL,1UL,255UL,0x63L},{0x5FL,248UL,247UL,248UL,247UL},{1UL,1UL,0x3BL,0UL,1UL},{0xA2L,0x66L,0x6FL,0x87L,255UL}},{{0x5AL,1UL,255UL,0xF7L,0xAAL},{248UL,0x66L,9UL,0UL,255UL},{0x1EL,1UL,1UL,1UL,0xF7L},{0x87L,4UL,0x5FL,247UL,9UL},{1UL,0x1EL,1UL,0xE8L,0xCBL},{246UL,0x81L,0x81L,246UL,0xE2L},{0x29L,0xCBL,0xF7L,249UL,0xAAL}}};
        uint32_t *****l_2353 = &g_1669;
        int16_t l_2355 = (-6L);
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2106[i] = 0x4A30L;
        for (i = 0; i < 4; i++)
            l_2107[i] = 0x63E19584L;
        for (i = 0; i < 3; i++)
            l_2202[i] = 0xC83EL;
        for (i = 0; i < 3; i++)
            l_2225[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_2250[i] = &g_342;
    }
    return (*g_26);
}



static int32_t  func_2(int8_t * const  p_3, struct S1  p_4, int32_t  p_5, uint32_t  p_6)
{ 
    uint32_t l_1786 = 6UL;
    struct S1 l_1787 = {0x524823CD9F3F5362LL,65533UL,0x45FDB55FL,-8L,6L,-1L,0x9A15L};
    struct S1 **l_1788 = &g_1277;
    (*g_699) ^= (~(l_1786 >= (l_1787 , ((void*)0 != l_1788))));
    return (*g_699);
}



static struct S1  func_9(uint64_t  p_10, uint8_t  p_11, union U2  p_12, int64_t  p_13, int8_t * p_14)
{ 
    uint8_t l_1027 = 254UL;
    int32_t l_1030 = 0x31B85E09L;
    int32_t l_1031 = 0x8CE74C88L;
    int32_t l_1032 = 0x0CC1A85AL;
    int32_t l_1033 = 7L;
    int32_t l_1034 = 0xF1E10721L;
    int32_t l_1035[4][6][6] = {{{0x2833C446L,0xD875C13DL,0xE9380A76L,0xD875C13DL,0x2833C446L,0x32A50ABFL},{0L,(-10L),1L,7L,0x280903E0L,0xB2CD5538L},{0x4AC85D90L,0x7BB1D6E7L,(-2L),(-10L),0xAD751715L,0xB2CD5538L},{0x6F719186L,1L,1L,0x495FB6E8L,0x1D371EACL,0x32A50ABFL},{0xAD751715L,0x52ED7B3CL,0xE9380A76L,(-1L),0L,0xCACC0AE7L},{0x19A4590CL,(-9L),0xAD751715L,0xE4FF2024L,7L,(-1L)}},{{0xCACC0AE7L,0x9ED144C8L,9L,0L,(-1L),0xBDDFCEA1L},{(-1L),5L,0x276E82A9L,0xE7477B7BL,(-6L),0x52ED7B3CL},{9L,0x107C6B63L,0xB2CD5538L,1L,0x05BE82D2L,1L},{(-3L),7L,0x05BE82D2L,(-9L),0x7BB1D6E7L,0x276E82A9L},{(-1L),0xE58D5861L,(-10L),5L,0xBDDFCEA1L,1L},{0L,0x6F719186L,2L,2L,0x6F719186L,0L}},{{0x9ED144C8L,6L,0x1D371EACL,1L,0xE9380A76L,(-1L)},{(-1L),0xE7477B7BL,0x280903E0L,0x253278DFL,(-1L),0x2833C446L},{(-1L),(-1L),0x253278DFL,1L,1L,0x19A4590CL},{0x9ED144C8L,0xE9380A76L,1L,2L,0L,0x2CF7861FL},{0L,(-1L),0x77132B1BL,5L,0x19A4590CL,0xD875C13DL},{(-1L),0xA5EDF67EL,(-1L),(-9L),0x495FB6E8L,0L}},{{(-3L),1L,0x9ED144C8L,1L,2L,(-3L)},{9L,1L,7L,0xE7477B7BL,5L,0xE4FF2024L},{(-1L),1L,0xBDDFCEA1L,0L,0x253278DFL,0x495FB6E8L},{0xCACC0AE7L,8L,(-9L),0xE4FF2024L,6L,2L},{0x19A4590CL,0x280903E0L,(-1L),(-1L),(-1L),0x280903E0L},{0xAD751715L,(-1L),0x4571F5A7L,0x495FB6E8L,0x77132B1BL,0x6F719186L}}};
    uint32_t l_1036 = 0xBCADF255L;
    int8_t *l_1058 = &g_8;
    struct S1 l_1108 = {0x80C87B3B8701D868LL,1UL,0x9EEE7669L,0xB6369E45L,0L,0xBC0E091FL,0x06A5L};
    int32_t **l_1137 = (void*)0;
    int32_t ***l_1136 = &l_1137;
    union U2 **l_1166[4];
    union U2 ***l_1165 = &l_1166[2];
    uint32_t l_1191 = 4294967293UL;
    const uint8_t l_1206 = 0x08L;
    union U2 ****l_1234 = &g_1170;
    int32_t l_1255 = 0x85B9E3DFL;
    uint64_t l_1257 = 0UL;
    uint16_t *l_1265 = (void*)0;
    uint16_t *l_1266[4][4] = {{&l_1108.f1,&l_1108.f1,&l_1108.f1,&l_1108.f1},{&l_1108.f1,&l_1108.f1,&l_1108.f1,&l_1108.f1},{&l_1108.f1,&l_1108.f1,&l_1108.f1,&l_1108.f1},{&l_1108.f1,&l_1108.f1,&l_1108.f1,&l_1108.f1}};
    uint8_t *l_1274 = &g_1148[1][0][2];
    uint8_t **l_1273 = &l_1274;
    struct S1 *l_1276 = (void*)0;
    struct S1 **l_1275[4][7][3] = {{{&l_1276,(void*)0,(void*)0},{(void*)0,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276}},{{&l_1276,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276}},{{(void*)0,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276}},{{&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276}}};
    uint64_t l_1285 = 0x7486BD38729C18F6LL;
    uint8_t l_1291 = 0x42L;
    int8_t * const ** const *l_1344[4][1] = {{&g_127},{&g_127},{&g_127},{&g_127}};
    int8_t * const ** const **l_1343 = &l_1344[0][0];
    int8_t ****l_1358 = (void*)0;
    int8_t *****l_1357 = &l_1358;
    uint32_t *l_1400 = (void*)0;
    uint16_t l_1430 = 1UL;
    const int32_t l_1508[5][2] = {{6L,6L},{6L,6L},{6L,6L},{6L,6L},{6L,6L}};
    union U2 *** const * const l_1523 = &l_1165;
    union U2 *** const * const *l_1522 = &l_1523;
    const int32_t l_1530 = 0x0A40D7E8L;
    const uint32_t *l_1532 = &g_54.f2;
    const uint32_t ** const l_1531 = &l_1532;
    uint16_t l_1559 = 65533UL;
    int16_t * const *l_1560 = &g_343;
    uint32_t l_1596 = 0xC70025B0L;
    int64_t ***l_1620 = &g_583;
    int64_t ****l_1619 = &l_1620;
    uint32_t l_1628 = 0x91B3FDE0L;
    struct S0 l_1667[1] = {{0x12BEE6B3L}};
    union U2 l_1777 = {{3UL}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1166[i] = &g_275;
    return (*g_1277);
}



static union U2  func_18(struct S0  p_19)
{ 
    int32_t *l_991 = &g_103;
    union U2 **l_993 = &g_275;
    union U2 ***l_992 = &l_993;
    union U2 ****l_994 = (void*)0;
    const uint64_t *l_997[7][3] = {{&g_107,(void*)0,&g_107},{&g_107,&g_107,&g_107},{&g_107,(void*)0,&g_107},{&g_107,&g_107,&g_107},{&g_107,(void*)0,&g_107},{&g_107,&g_107,&g_107},{&g_107,(void*)0,&g_107}};
    int8_t *l_998 = &g_674;
    const struct S1 *l_1000[5][7] = {{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54,&g_54},{&g_54,&g_54,&g_54,&g_54,&g_54,&g_54,&g_54}};
    int32_t l_1023 = 0L;
    union U2 l_1025 = {{0xDED76019L}};
    int i, j;
    l_991 = l_991;
    l_992 = l_992;
    for (g_105 = (-20); (g_105 == (-6)); g_105++)
    { 
        struct S0 l_999 = {0x055ED290L};
        const struct S1 **l_1001 = (void*)0;
        const struct S1 **l_1002 = &l_1000[2][5];
        (*g_699) ^= ((-1L) >= ((((((**g_342) = (l_999 , 0x5753L)) , g_54) , (void*)0) != (void*)0) || 0xC858L));
        (*l_1002) = l_1000[3][2];
        for (g_54.f5 = 0; (g_54.f5 <= 3); g_54.f5 += 1)
        { 
            uint8_t l_1016[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1016[i][j] = 0UL;
            }
            for (g_54.f3 = 0; (g_54.f3 <= 3); g_54.f3 += 1)
            { 
                int32_t *l_1024 = &g_59.f1;
                int i;
                (*l_1024) |= (((safe_add_func_uint8_t_u_u((g_38[g_54.f5] || ((((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((~((*l_991) = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_1016[0][0], 7)), g_105)))) > (safe_lshift_func_int16_t_s_u((((((void*)0 != &g_434) != (g_38[g_54.f5] || (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_296[0], 0x64L)), 0UL)))) != g_54.f6) & g_295), l_1023))), p_19.f0)), 4)) < (-8L)) && 0L) != p_19.f0)), g_38[g_54.f5])) || g_37) && l_1016[1][0]);
                if (l_999.f0)
                    break;
            }
            if (l_1016[0][0])
                break;
        }
    }
    return l_1025;
}



static struct S0  func_20(const uint64_t * p_21, union U2  p_22, int8_t * p_23, int32_t  p_24, int16_t  p_25)
{ 
    int64_t l_503 = 0x31C7B4695BC93694LL;
    int32_t l_509 = 3L;
    uint32_t l_510 = 0xB3949E56L;
    uint16_t *l_552 = &g_294;
    const int16_t *l_573 = &g_54.f6;
    const int16_t **l_572[1][5];
    int32_t l_596 = (-1L);
    uint8_t l_598 = 255UL;
    int16_t l_619[6][7] = {{(-5L),1L,0L,(-5L),0x04D1L,(-1L),1L},{8L,(-1L),0x397AL,0L,0x397AL,(-1L),8L},{(-1L),1L,3L,0x397AL,8L,(-1L),0x397AL},{(-5L),0x04D1L,(-1L),1L,1L,(-1L),0x04D1L},{1L,(-4L),3L,0L,(-4L),0x397AL,0x04D1L},{0xFABFL,1L,0x397AL,0xFABFL,0x04D1L,0xFABFL,0x397AL}};
    int32_t l_623 = 0x811052F3L;
    int32_t l_624[3][2] = {{0xF49C89B5L,0xF49C89B5L},{0xF49C89B5L,0xF49C89B5L},{0xF49C89B5L,0xF49C89B5L}};
    uint8_t l_672 = 248UL;
    struct S0 ***l_730[2][4][4];
    int32_t l_773 = 0xC14A78F6L;
    int32_t l_816 = 0xF680AFECL;
    uint64_t l_823[2][1];
    struct S1 l_832 = {0xF029AD72A6E7FE1ALL,0UL,0x5264EC5CL,0x8D74DE05L,2L,0L,0x97EDL};
    uint32_t **l_893 = (void*)0;
    uint32_t *l_940 = &g_434;
    int32_t *l_959 = (void*)0;
    const int64_t l_960 = 1L;
    int32_t l_978[6];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_572[i][j] = &l_573;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
                l_730[i][j][k] = &g_396;
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_823[i][j] = 0x081FDA056ED5FFCALL;
    }
    for (i = 0; i < 6; i++)
        l_978[i] = 0L;
    for (g_81 = 17; (g_81 == 28); g_81 = safe_add_func_uint8_t_u_u(g_81, 8))
    { 
        struct S0 l_501 = {4294967294UL};
        uint64_t l_504[4];
        int32_t l_588 = 1L;
        int32_t l_589 = 0x5E5BE57AL;
        int32_t l_590 = 0xFF4494DCL;
        int32_t l_593 = 0x26B8C9FBL;
        int32_t l_597 = 0xB74D0C42L;
        const int32_t **l_614[2];
        const int32_t ***l_613 = &l_614[0];
        int8_t l_618 = 0x6AL;
        int32_t l_620 = 9L;
        int32_t l_621[4][7][6] = {{{7L,8L,1L,8L,7L,1L},{8L,7L,1L,5L,5L,1L},{5L,5L,1L,7L,8L,1L},{7L,8L,1L,8L,7L,1L},{8L,7L,1L,5L,5L,1L},{5L,5L,1L,7L,8L,1L},{7L,8L,1L,8L,7L,1L}},{{8L,7L,1L,5L,5L,1L},{5L,5L,1L,7L,8L,1L},{7L,8L,1L,8L,7L,1L},{8L,7L,1L,5L,5L,1L},{5L,5L,1L,7L,8L,1L},{7L,8L,1L,8L,7L,1L},{8L,7L,1L,5L,5L,1L}},{{5L,5L,1L,7L,8L,1L},{7L,8L,1L,8L,7L,1L},{8L,7L,1L,5L,5L,1L},{5L,5L,1L,7L,8L,1L},{7L,8L,1L,8L,7L,1L},{8L,7L,1L,5L,5L,1L},{5L,5L,1L,7L,8L,1L}},{{7L,8L,1L,8L,7L,1L},{8L,7L,1L,5L,5L,1L},{5L,5L,1L,7L,8L,1L},{7L,8L,1L,8L,7L,1L},{8L,7L,1L,5L,5L,1L},{5L,5L,1L,7L,8L,1L},{7L,8L,1L,8L,7L,1L}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_504[i] = 0xD6A920C1C384F78DLL;
        for (i = 0; i < 2; i++)
            l_614[i] = (void*)0;
        for (g_54.f5 = (-5); (g_54.f5 < (-17)); --g_54.f5)
        { 
            int16_t l_508 = (-7L);
            int32_t l_515 = 0x08AD66BCL;
            int64_t *l_518[3];
            int32_t l_540 = 0xCDD66B43L;
            int32_t l_591 = 0xB97B225BL;
            int32_t l_594 = 1L;
            int32_t l_595[7][7] = {{0x24B26DA5L,(-1L),0x8F250081L,2L,2L,0x8F250081L,(-1L)},{2L,0x24B26DA5L,0x8110FF96L,0xFC39B966L,0x39A7A362L,(-8L),(-8L)},{0x8110FF96L,0x24B26DA5L,2L,0x24B26DA5L,0x8F250081L,0xE902385DL,(-8L)},{2L,0x8110FF96L,0x696F4939L,0xE902385DL,(-1L),0xE902385DL,0x696F4939L},{(-8L),(-8L),0x39A7A362L,0xFC39B966L,0x8110FF96L,0x24B26DA5L,2L},{2L,0xE902385DL,0x39A7A362L,0x39A7A362L,0xE902385DL,2L,(-1L)},{0x8F250081L,0x39A7A362L,0x696F4939L,(-1L),0x8110FF96L,0x8110FF96L,(-1L)}};
            int32_t *l_617[3][2][4] = {{{&l_588,&l_594,&l_594,&l_588},{&l_594,&l_588,&l_594,&l_594}},{{&l_588,&l_588,&l_596,&l_588},{&l_588,&l_594,&l_594,&l_588}},{{&l_594,&l_588,&l_594,&l_594},{&l_588,&l_588,&l_596,&l_588}}};
            int16_t l_622 = 0x700FL;
            uint32_t l_625 = 1UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_518[i] = &g_417;
            for (g_259 = 16; (g_259 >= 57); g_259 = safe_add_func_int8_t_s_s(g_259, 6))
            { 
                int32_t l_499[2];
                int32_t l_500 = 0x618ED9D0L;
                int i;
                for (i = 0; i < 2; i++)
                    l_499[i] = 0x8E42373CL;
                l_500 ^= l_499[0];
            }
            if ((p_24 , (l_501 , ((p_22.f0.f0 >= (-2L)) & (l_501.f0 , (-7L))))))
            { 
                int16_t l_523[2][3][3] = {{{0L,1L,1L},{(-10L),(-5L),(-10L)},{0L,0L,1L}},{{0x6EDCL,(-5L),0x6EDCL},{0L,1L,1L},{(-10L),(-5L),(-10L)}}};
                int32_t *l_524 = &g_297;
                int i, j, k;
                for (g_434 = 0; (g_434 <= 3); g_434 += 1)
                { 
                    int32_t *l_502[6][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t **l_507 = &l_502[0][3];
                    int i, j;
                    l_503 ^= g_38[g_434];
                    l_504[0]--;
                    (*l_507) = &g_296[0];
                    ++l_510;
                    l_515 = (safe_add_func_int16_t_s_s((g_297 || l_504[2]), (0x67B0F103L && (g_54.f3 , ((void*)0 != &p_23)))));
                }
                (*l_524) = (((safe_rshift_func_int8_t_s_u((((&g_295 == ((****g_126) , l_518[2])) | (l_504[3] | g_54.f3)) , (*g_129)), 6)) != (safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((((1L >= l_501.f0) < l_504[1]) < l_515) != l_523[0][1][1]), g_59.f0.f0)) < p_24) , 1L), l_503))) != 0x3C29EC31L);
            }
            else
            { 
                uint8_t l_531 = 0x24L;
                uint16_t *l_541 = &g_294;
                uint64_t *l_542[2];
                int32_t l_543 = 0x26D23D1FL;
                int32_t *l_544 = &g_296[0];
                int32_t *l_586 = &l_543;
                int32_t *l_587[3][3][3] = {{{&g_59.f1,&g_296[0],&g_296[0]},{&g_59.f1,&g_296[0],&g_296[0]},{&g_59.f1,&g_296[0],&g_296[0]}},{{&g_59.f1,&g_296[0],&g_296[0]},{&g_59.f1,&g_296[0],&g_296[0]},{&g_59.f1,&g_296[0],&g_296[0]}},{{&g_59.f1,&g_296[0],&g_296[0]},{&g_59.f1,&g_296[0],&g_296[0]},{&g_59.f1,&g_296[0],&g_296[0]}}};
                int32_t l_592 = 1L;
                int8_t ***l_602 = (void*)0;
                int8_t ****l_601 = &l_602;
                uint32_t l_615 = 0x1DED42B4L;
                int32_t l_616[7][6][2] = {{{0x48FE03E5L,0L},{(-9L),(-9L)},{0L,0x48FE03E5L},{0x9355A08DL,0x1E1C69C2L},{1L,(-9L)},{0x37466989L,1L}},{{0x48FE03E5L,0x0417E4B5L},{0x48FE03E5L,1L},{0x37466989L,(-9L)},{1L,0x1E1C69C2L},{0x9355A08DL,0x48FE03E5L},{0L,(-9L)}},{{(-9L),0L},{0x48FE03E5L,0x9355A08DL},{0x1E1C69C2L,1L},{(-9L),0x37466989L},{1L,0x48FE03E5L},{0x0417E4B5L,0x48FE03E5L}},{{1L,0x37466989L},{(-9L),1L},{0x1E1C69C2L,0x9355A08DL},{0x48FE03E5L,0L},{(-9L),(-9L)},{0L,0x48FE03E5L}},{{0x9355A08DL,0x1E1C69C2L},{1L,(-9L)},{0x37466989L,1L},{0x48FE03E5L,0x0417E4B5L},{0x48FE03E5L,1L},{0x37466989L,(-9L)}},{{1L,0x1E1C69C2L},{0x9355A08DL,0x48FE03E5L},{0L,(-9L)},{(-9L),0x45DEFFF2L},{0L,4L},{7L,0x0417E4B5L}},{{0xCB16F903L,0L},{0x0417E4B5L,0L},{0x01E5E118L,0L},{0x0417E4B5L,0L},{0xCB16F903L,0x0417E4B5L},{7L,4L}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_542[i] = &l_504[0];
                (*l_544) = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((p_22.f3 <= (0x010BL <= (l_531 = 0L))), (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(((g_417 &= g_8) > (l_543 = ((safe_mul_func_uint16_t_u_u(((*l_541) = (safe_lshift_func_uint16_t_u_s((l_540 > l_504[2]), (**g_342)))), l_504[0])) | p_22.f0.f0))), 0xFA9AL)) >= (*p_21)), p_24)))), 9)), 7));
                if (l_508)
                    continue;
                for (l_510 = 0; (l_510 > 20); l_510 = safe_add_func_uint16_t_u_u(l_510, 6))
                { 
                    int64_t **l_551[4][1];
                    int32_t l_555 = 1L;
                    int32_t l_558 = 0x8789C9BCL;
                    int32_t **l_559 = &l_544;
                    int32_t *l_582 = &g_59.f1;
                    int64_t ***l_585 = &l_551[3][0];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_551[i][j] = &l_518[2];
                    }
                    (*l_559) = ((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((((l_518[2] = l_542[1]) != (void*)0) , (void*)0) != l_552), (((safe_rshift_func_uint16_t_u_u((l_555 = (&p_22 != (void*)0)), 12)) && (safe_mul_func_int8_t_s_s((**g_128), 0x89L))) != (-1L)))) != l_558), (**g_342))) , &g_296[0]);
                    if (p_25)
                        break;
                    (*l_582) ^= (((safe_add_func_int16_t_s_s(((l_509 = 0UL) == ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((((void*)0 != l_572[0][4]) , (*g_343)), ((*l_544) = ((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(l_504[1], (safe_lshift_func_int16_t_s_u((-1L), (safe_div_func_uint64_t_u_u((1L | 0xD640L), (*p_21))))))), 0xAA16818EL)) == p_22.f3)))) == (**g_342)), 9L)), 0x47L)), (-1L))), (****g_126))) , 0xD785EBF6670D0831LL)), (**g_342))) >= g_461) && l_509);
                    g_37 = (p_22.f1 |= ((*l_582) |= g_296[0]));
                    (*l_585) = g_583;
                }
                --l_598;
                (*l_586) = (l_601 == ((safe_lshift_func_uint8_t_u_s(((((safe_lshift_func_int16_t_s_s(((***g_127) & (((safe_div_func_int8_t_s_s(l_504[0], (*l_586))) | (safe_add_func_uint32_t_u_u((p_24 && (((l_613 == (void*)0) , (*g_26)) >= 0x8629D3D2DEF77FA1LL)), 0UL))) , l_615)), l_616[1][1][0])) > (*g_26)) >= g_8) , 9UL), 3)) , &l_602));
            }
            l_625--;
        }
    }
    for (g_259 = 0; (g_259 <= 0); g_259 += 1)
    { 
        uint64_t *l_628[6][4] = {{&g_27,&g_27,&g_27,&g_107},{&g_27,&g_107,&g_27,&g_27},{&g_27,&g_107,&g_54.f0,&g_107},{&g_27,&g_27,&g_27,&g_107},{&g_27,&g_107,&g_27,&g_27},{&g_27,&g_107,&g_54.f0,&g_107}};
        struct S0 * const ***l_685 = (void*)0;
        struct S0 * const ****l_684 = &l_685;
        union U2 l_727 = {{9UL}};
        int32_t l_747 = 5L;
        int32_t *l_764 = &g_296[0];
        int32_t l_822 = 0x3334CAFFL;
        union U2 *l_934[2];
        uint64_t l_981[3][3] = {{0xFC2286A1C525ED55LL,0x210F7B466DB45FCELL,0x210F7B466DB45FCELL},{0xFC2286A1C525ED55LL,0x210F7B466DB45FCELL,0x210F7B466DB45FCELL},{0xFC2286A1C525ED55LL,0x210F7B466DB45FCELL,0x210F7B466DB45FCELL}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_934[i] = &l_727;
        g_296[g_259] = g_296[g_259];
        for (g_193 = 0; (g_193 <= 0); g_193 += 1)
        { 
            uint16_t l_629[1][3];
            union U2 l_634 = {{0xFEF7F724L}};
            int8_t ****l_653 = (void*)0;
            int64_t ***l_670 = &g_583;
            int32_t *l_734[7];
            int16_t ***l_739 = &g_342;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_629[i][j] = 65528UL;
            }
            for (i = 0; i < 7; i++)
                l_734[i] = &l_509;
            g_59.f0 = func_33(l_628[1][0]);
        }
        for (g_101 = 1; (g_101 >= 0); g_101 -= 1)
        { 
            uint8_t l_779 = 0xD7L;
            struct S0 l_798[2] = {{0x3099AA0BL},{0x3099AA0BL}};
            int32_t l_799 = 0xC67C94A7L;
            int32_t l_800 = 0x1196C244L;
            int32_t l_804[5] = {0x4416A798L,0x4416A798L,0x4416A798L,0x4416A798L,0x4416A798L};
            int32_t l_807[5] = {0xAE839E1BL,0xAE839E1BL,0xAE839E1BL,0xAE839E1BL,0xAE839E1BL};
            int16_t l_815 = 0x7AC3L;
            int16_t l_821[6][1][3];
            int8_t * const ****l_833 = &g_126;
            struct S1 l_840 = {0x58B6DA792DFF2023LL,65529UL,0xBEC113CCL,-1L,0xDD8DL,0x4D886F25L,-4L};
            const int16_t **l_845 = &l_573;
            uint64_t *l_855[3];
            int16_t ***l_891 = &g_342;
            int16_t ****l_890[2][1];
            struct S0 l_975 = {0xD3A54285L};
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_821[i][j][k] = 0xBCBBL;
                }
            }
            for (i = 0; i < 3; i++)
                l_855[i] = &l_823[1][0];
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_890[i][j] = &l_891;
            }
            l_764 = &g_297;
        }
    }
    return p_22.f0;
}



static int8_t  func_28(uint64_t * p_29, int32_t  p_30, union U2  p_31, uint32_t  p_32)
{ 
    int8_t * const **l_490 = &g_128;
    int32_t l_491 = 0xD15548A5L;
    l_490 = l_490;
    return l_491;
}



static struct S0  func_33(uint64_t * p_34)
{ 
    int32_t *l_35 = (void*)0;
    int32_t *l_36[6] = {&g_37,&g_37,&g_37,&g_37,&g_37,&g_37};
    uint8_t l_41 = 0x28L;
    int8_t *l_56 = &g_8;
    int8_t **l_148 = &l_56;
    int8_t ***l_147 = &l_148;
    int8_t **** const l_146 = &l_147;
    uint32_t l_157 = 0xCF306C01L;
    int8_t l_220 = 0xCFL;
    const struct S0 l_221 = {4294967295UL};
    int32_t l_271[5];
    int16_t l_298 = (-4L);
    int16_t l_300 = (-1L);
    int16_t l_302 = 0x80E3L;
    int8_t l_303 = 0xCEL;
    int32_t l_304 = 0xAC3ADBA4L;
    int64_t l_305 = 0L;
    int32_t l_306 = (-7L);
    uint16_t l_307[1][1][7] = {{{0x9209L,0x9209L,0x9209L,0x9209L,0x9209L,0x9209L,0x9209L}}};
    int32_t l_432[2];
    int32_t l_433 = (-6L);
    uint16_t l_477 = 0UL;
    uint64_t l_478 = 0x573BDD2BEBB7DCF7LL;
    int32_t *l_487 = &g_296[0];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_271[i] = 0xDD029318L;
    for (i = 0; i < 2; i++)
        l_432[i] = 0xAD8954F0L;
    g_38[0]++;
    ++l_41;
    for (l_41 = 0; (l_41 == 59); l_41++)
    { 
        int8_t l_51 = 0xD7L;
        int32_t l_95 = 0xC5435112L;
        int32_t l_96 = 0xCEB51834L;
        int32_t l_98 = 1L;
        int32_t l_100 = 1L;
        int8_t * const **l_184 = &g_128;
        int32_t l_215[4][1] = {{0xC61CCE0BL},{7L},{0xC61CCE0BL},{7L}};
        uint16_t l_229[1];
        int16_t *l_256 = &g_54.f6;
        int16_t **l_255 = &l_256;
        int16_t ***l_254 = &l_255;
        int32_t l_299 = 8L;
        int64_t l_301 = 0xA2F051051B631020LL;
        const struct S0 *l_349 = &g_59.f0;
        struct S0 l_422[5] = {{0xBCFCD8A3L},{0xBCFCD8A3L},{0xBCFCD8A3L},{0xBCFCD8A3L},{0xBCFCD8A3L}};
        uint8_t *l_437 = &g_38[0];
        struct S0 ***l_463[2];
        struct S0 ****l_462 = &l_463[1];
        uint32_t l_484[1][6][2] = {{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_229[i] = 1UL;
        for (i = 0; i < 2; i++)
            l_463[i] = &g_396;
    }
    l_487 = &l_306;
    return l_221;
}



static int32_t  func_46(uint16_t  p_47, uint32_t  p_48, int32_t * p_49, union U2  p_50)
{ 
    uint8_t *l_62 = &g_38[0];
    int32_t l_73 = 4L;
    int64_t *l_80 = &g_81;
    int16_t *l_82[4];
    int32_t l_83 = 0x443A54D8L;
    int32_t l_84[7][6] = {{0L,0x462C7DCBL,0L,0x139E6D59L,(-1L),0x0EF155D2L},{0x224F168EL,0x139E6D59L,0x9E3B93F1L,0L,(-8L),(-8L)},{0L,(-8L),(-8L),0L,0x9E3B93F1L,0x139E6D59L},{0x224F168EL,0x0EF155D2L,(-1L),0x139E6D59L,0L,0x462C7DCBL},{0L,0x9E3B93F1L,0xCFF1CC5CL,0x9E3B93F1L,0L,(-7L)},{0x462C7DCBL,0x0EF155D2L,0x93330862L,0xA1EA5693L,0x9E3B93F1L,(-1L)},{(-1L),(-8L),0x0EF155D2L,0x0EF155D2L,(-8L),(-1L)}};
    int32_t l_85 = (-1L);
    int8_t *l_87[1][5][1] = {{{&g_8},{&g_8},{&g_8},{&g_8},{&g_8}}};
    int8_t **l_86 = &l_87[0][1][0];
    const int8_t ***l_88 = (void*)0;
    int8_t ***l_89 = &l_86;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_82[i] = &g_54.f4;
    (*l_89) = ((((*l_86) = ((safe_lshift_func_uint8_t_u_s((((++(*l_62)) < (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(g_54.f5, (safe_div_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_u(((((l_73 , (((safe_div_func_uint64_t_u_u(l_73, (((l_85 = (p_47 > (l_84[3][3] = (l_83 = (safe_lshift_func_uint8_t_u_u(0xD6L, ((((*g_26) | ((*l_80) &= 0x4B7C80BFD7802F47LL)) == 0xFB8AL) , 1UL))))))) , p_50.f3) | l_73))) && g_59.f1) & 0L)) & g_8) == 0xE3L) | l_73), g_27)) >= l_73) , l_84[6][5]), g_54.f3)))), p_48))) ^ 0x00L), l_73)) , &g_8)) != (void*)0) , (void*)0);
    return l_83;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);

    }
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1, "g_54.f1", print_hash_value);
    transparent_crc(g_54.f2, "g_54.f2", print_hash_value);
    transparent_crc(g_54.f3, "g_54.f3", print_hash_value);
    transparent_crc(g_54.f4, "g_54.f4", print_hash_value);
    transparent_crc(g_54.f5, "g_54.f5", print_hash_value);
    transparent_crc(g_54.f6, "g_54.f6", print_hash_value);
    transparent_crc(g_59.f0.f0, "g_59.f0.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f3, "g_59.f3", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_296[i], "g_296[i]", print_hash_value);

    }
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_1057.f0.f0, "g_1057.f0.f0", print_hash_value);
    transparent_crc(g_1057.f1, "g_1057.f1", print_hash_value);
    transparent_crc(g_1057.f3, "g_1057.f3", print_hash_value);
    transparent_crc(g_1139, "g_1139", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1148[i][j][k], "g_1148[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1278.f0, "g_1278.f0", print_hash_value);
    transparent_crc(g_1278.f1, "g_1278.f1", print_hash_value);
    transparent_crc(g_1278.f2, "g_1278.f2", print_hash_value);
    transparent_crc(g_1278.f3, "g_1278.f3", print_hash_value);
    transparent_crc(g_1278.f4, "g_1278.f4", print_hash_value);
    transparent_crc(g_1278.f5, "g_1278.f5", print_hash_value);
    transparent_crc(g_1278.f6, "g_1278.f6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1297[i].f0, "g_1297[i].f0", print_hash_value);
        transparent_crc(g_1297[i].f1, "g_1297[i].f1", print_hash_value);
        transparent_crc(g_1297[i].f2, "g_1297[i].f2", print_hash_value);
        transparent_crc(g_1297[i].f3, "g_1297[i].f3", print_hash_value);
        transparent_crc(g_1297[i].f4, "g_1297[i].f4", print_hash_value);
        transparent_crc(g_1297[i].f5, "g_1297[i].f5", print_hash_value);
        transparent_crc(g_1297[i].f6, "g_1297[i].f6", print_hash_value);

    }
    transparent_crc(g_1366, "g_1366", print_hash_value);
    transparent_crc(g_1376, "g_1376", print_hash_value);
    transparent_crc(g_1382, "g_1382", print_hash_value);
    transparent_crc(g_1511, "g_1511", print_hash_value);
    transparent_crc(g_1631, "g_1631", print_hash_value);
    transparent_crc(g_1648, "g_1648", print_hash_value);
    transparent_crc(g_1672.f0, "g_1672.f0", print_hash_value);
    transparent_crc(g_1672.f1, "g_1672.f1", print_hash_value);
    transparent_crc(g_1672.f2, "g_1672.f2", print_hash_value);
    transparent_crc(g_1672.f3, "g_1672.f3", print_hash_value);
    transparent_crc(g_1672.f4, "g_1672.f4", print_hash_value);
    transparent_crc(g_1672.f5, "g_1672.f5", print_hash_value);
    transparent_crc(g_1672.f6, "g_1672.f6", print_hash_value);
    transparent_crc(g_1709, "g_1709", print_hash_value);
    transparent_crc(g_1726, "g_1726", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1804[i][j], "g_1804[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1869, "g_1869", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1956[i][j][k], "g_1956[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1978.f0, "g_1978.f0", print_hash_value);
    transparent_crc(g_2004.f0.f0, "g_2004.f0.f0", print_hash_value);
    transparent_crc(g_2004.f1, "g_2004.f1", print_hash_value);
    transparent_crc(g_2004.f3, "g_2004.f3", print_hash_value);
    transparent_crc(g_2111, "g_2111", print_hash_value);
    transparent_crc(g_2272, "g_2272", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2289[i][j], "g_2289[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2312[i][j], "g_2312[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
